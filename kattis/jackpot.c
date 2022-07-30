#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 1000000000
#define NX 31623+5

void findDivisor(int num, int ww[NX][2]) ;
void add(int num, int times, int ww[NX][2]) ;

/*
    https://open.kattis.com/problems/jackpot
*/
int main() {
    int n, w, x;
    int ws[5] ;
    int ww[NX][2] = {0} ;
    

    x = scanf("%d", &n) ;

    for (int i=0;i<n;i++) {
        x = scanf("%d", &w) ;
        if (w<1 || w>5) {
            return 0 ;
        }
        
        memset(ws, 0, sizeof(ws)) ;
        memset(ww, 0, sizeof(ww)) ;
        for (int j=0;j<w;j++) {
            x = scanf("%d", &ws[j]) ;
        }

        for (int j=0;j<w;j++) {
            if (ws[j] != 0) {
                findDivisor(ws[j], ww) ;
            } else {
                break ;
            }
        }

        int total = 1 ;
        for (int j=0;j<NX;j++) {
            if (ww[j][0] != 0) {
                total *= pow(ww[j][0], ww[j][1]) ;
                if (total < 0) { // overflow
                    break ;
                }
            }
        }

        if (total > MAX || total < 0) {
            printf("More than a billion.\n") ;
        } else {
            printf("%d\n", total) ;
        }
    }

    return 0 ;
}

// 分解因數
void findDivisor(int num, int ww[NX][2]) {
    int times = 0 ;
    char found = 0 ;
    while (num%2==0) {
        found = 1;
        times++ ;
        num /= 2 ;
    }
    if (times!=0) {
        add(2, times, ww) ;
    }

    times = 0 ;
    while (num%3==0) {
        found = 1;
        times++ ;
        num /= 3 ;
    }
    if (times!=0) {
        add(3, times, ww) ;
    }

    times = 0 ;
    while (num%5==0) {
        found = 1;
        times++ ;
        num /= 5 ;
    }
    if (times!=0) {
        add(5, times, ww) ;
    }


    for (int i=1;i<=num;i++) {
        int x = 6*i+1 ;
        if (x*x>num) {
            add(num, 1, ww) ;
            return ;
        }

        times = 0 ;
        while (num%x == 0) {
            found = 1;
            times++ ;
            num /= x ;
        }
        if (times!=0) {
            add(x, times, ww) ;
        }

        x = 6*i+5 ;
        if (x*x>num) {
            add(num, 1, ww) ;
            return ;
        }

        times = 0 ;
        while (num%x == 0) {
            found = 1;
            times++ ;
            num /= x ;
        }
        if (times!=0) {
            add(x, times, ww) ;
        }
    }
}

void add(int num, int times, int ww[NX][2]) {
    char found = 0 ;
    int i = 0 ;
    for(i=0;i<NX;i++) {
        if (ww[i][0] == 0) {
            break ;
        } else if (ww[i][0] == num) {
            found = 1 ;

            if (ww[i][1] < times) {
                ww[i][1] = times ;
            }
        }
    }

    if (found == 0) {
        ww[i][0] = num ;
        ww[i][1] = times ;
    }
}