#include <stdio.h>
#include <string.h>
#include <math.h>

/*
https://open.kattis.com/problems/calculator
*/
void parse(char in[500]) ;
double atoi(char in[500], int *offset, int limit) ;
void removeSpace(char in[500]) ;

int main() {
    int x ;
    char input[500] = {0} ;
    double ans = 0.0 ;
    int *offset = 0 ;

    x = scanf("%[^\n]", input) ;
    removeSpace(input) ;

    parse(input) ;


    printf("%.2f\n", ans) ;

    return 0 ;
}

/*
依優先順序計算 a ? b
*/
void parse(char in[500]) {
    char p[167][500] = {0};
    int cnt = 0 ;
    int sw = 0 ;
    int limit = strlen(in) ;

    for (int i=0; i<limit;i++) {
        if (in[i] == '-' && sw == 0) { // 負數
            for (int j=i+1;j<=limit;j++) {
                if (in[j] == '\0' || in[j] < '0' || in[j] > '9') {
                    memcpy(p[cnt++], &in[i], j-i) ;
                    i = j-1 ;
                    sw  = 1 ;
                    break ;
                }
            }
        // } else if (in[i] == '-' && sw == 1) { // 計算符
        //     strcpy(p[cnt++], i, 1) ;
        //     i++ ;
        //     sw = 0 ;
        } else if (in[i] == '(') { // 刮號
            for (int j=i+3;j<limit;j++) {
                if (in[j] == ')') {
                    memcpy(p[cnt++], &in[i+1], j-i-1) ;
                    i = j ;
                    break ;
                }
            }
        // } else if (in[i] == ' ') { // ignore space
        //     continue ;
        } else if (in[i] >= '0' && in[i] <= '9') { // 0~9
            for (int j=i+1;j<=limit;j++) {
                if (in[j] == '\0') { // end of line
                    memcpy(p[cnt++], &in[i], j-i) ;
                } else if (in[j] < '0' || in[j] > '9') {
                    memcpy(p[cnt++], &in[i], j-i) ;
                    i = j-1 ;
                    sw  = 1 ;
                    break ;
                }
            }
        } else { // + - * /
            memcpy(p[cnt++], &in[i], 1) ;
            sw = 0 ;
        }
    } // for (int i=0; i<limit;i++) {
}


double atoi(char in[500], int *offset, int limit) {
    double ans = 0 ;
    int cnt = 0 ;
    for (int i=limit-1; i>=*offset;i--) {
        if (in[i] == ' ') {
            continue ;
        } else if (in[i] != '-') {
            ans += (in[i]-'0')*pow(10, cnt++) ;
        } else {
            ans = -1.0*ans ;
        }
    }
    memset(&in[*offset], ' ', limit-*offset) ;

    return ans ;
}

void removeSpace(char in[500]) {
    int len = strlen(in) ;
    for (int i=0; i<len;i++) {
        if (in[i] == ' ') {
            memcpy(&in[i], &in[i+1], sizeof(in[0]*(len-i-1))) ;
        }
    }
}


