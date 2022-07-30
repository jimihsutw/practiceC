#include <stdio.h>
#include <string.h>
#include <math.h>

int stoi(char str_score[]) ;
void processDate(char day[]) ;
void sort(char names[][11], int limit) ;

int main() {
    int n, x;
    int map[1232][1] ={0} ;
    char names[1232][11] = {0} ;

    x = scanf("%d", &n) ;

    int cnt = 0 ;
    for (int i=0;i<n;i++) {
        char name[11]={0} ;
        char str_score[7]={0} ;
        char str_day[6]={0} ;
        int score = 0 ;
        int day = 0 ;

        x = scanf("%s %s %s", name, str_score, str_day) ;
        processDate(str_day) ;
        score = stoi(str_score) ;
        day = stoi(str_day) ;

        if (map[day][0]<score 
        || (score ==0 && map[day][0]==0)) { // score could be zero
            if (map[day][0] == 0) {
                cnt++ ;
            }
            map[day][0] = score ;
            memcpy(names[day], name, sizeof(name)) ;
        }
    }
    sort(names, cnt) ;

    printf("%d\n", cnt) ;
    for (int i=1231;i>100;i--) {
        if (names[i][0] != '\0') {
            printf("%s\n", names[i]) ;
        }
    }

    return 0 ;
}

int stoi(char str[]) {
    int score=0 ;
    int cnt=0 ;

    for (int i=strlen(str)-1;i>=0;i--) {
        score += (str[i]-'0')*pow(10, cnt++) ;
    }

    return score ;
}

void processDate(char day[]) {
    char tmp = 0 ;
    // 14/03
    day[2] = day[0] ;  // 14103
    day[0] = day[3] ; // 04103
    tmp = day[1] ; // 04103 4
    day[1] = day[4] ; // 03103 4
    day[3] = tmp ; // 0314 4
    day[4] = '\0' ; // 0314 4
}

/*
sort name array
*/
void sort(char names[][11], int limit) {
    char tmp[11] = {0} ;
    int max = 1231 ;

    for (int k=0;k<limit;k++) {
        for (int i=101;i<max;i++) {
            if (names[i][0] == 0) {
                continue ;
            }

            for (int j=0;j<11;j++) {
                if (names[max][0] == 0 || names[i][j] < names[max][j]) {
                    memcpy(tmp, names[max], sizeof(tmp)) ;
                    memcpy(names[max], names[i], sizeof(tmp)) ;
                    memcpy(names[i], tmp, sizeof(tmp)) ;

                    break ;
                } else if (names[i][j] > names[max][j]) {
                    break ;
                }
            }
        }
        max-- ;
    }
}