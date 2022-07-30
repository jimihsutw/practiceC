#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shuffle(char card[][3], int n) ;

int main() {
    char yes[13][3] = {"1m ", "9m ", "1p ", "9p ", "1s ", "9s ", "1z ", "2z ", "3z ", "4z ", "5z ", "6z ", "7z "} ;
    char no[84][3] = {
        "2m ", "3m ", "4m ", "5m ", "6m ", "7m ", "8m ",
        "2m ", "3m ", "4m ", "5m ", "6m ", "7m ", "8m ",
        "2m ", "3m ", "4m ", "5m ", "6m ", "7m ", "8m ",
        "2m ", "3m ", "4m ", "5m ", "6m ", "7m ", "8m ",
        "2p ", "3p ", "4p ", "5p ", "6p ", "7p ", "8p ",
        "2p ", "3p ", "4p ", "5p ", "6p ", "7p ", "8p ",
        "2p ", "3p ", "4p ", "5p ", "6p ", "7p ", "8p ",
        "2p ", "3p ", "4p ", "5p ", "6p ", "7p ", "8p ",
        "2s ", "3s ", "4s ", "5s ", "6s ", "7s ", "8s ",
        "2s ", "3s ", "4s ", "5s ", "6s ", "7s ", "8s ",
        "2s ", "3s ", "4s ", "5s ", "6s ", "7s ", "8s ",
        "2s ", "3s ", "4s ", "5s ", "6s ", "7s ", "8s ",
    } ;
    char ans[13][3] = {0} ;

    int n, k ;

    scanf("%d %d", &n, &k) ;

    for (int i=0; i<n; i++) {
        if (k == 13) {
            shuffle(yes, 13) ;
            memcpy(ans, yes, sizeof(ans)) ;
        } else if (k == 1) {
            shuffle(yes, 13) ;
            memcpy(ans, yes, sizeof(ans[0])*12) ;
            memcpy(ans[12], ans[0], sizeof(ans[0])) ;
        } else if (k == 0) {
            shuffle(no, 84) ;
            memcpy(ans, no, sizeof(ans)) ;
        }

        ans[12][2] = '\0' ;
        printf("%s\n", ans) ;
    }

    return 0 ;
}

void shuffle(char card[][3], int n) {
    
    for (int i=0;i<13;i++) {
        int r = rand()%n ;
        //printf("random=%d\n", r) ;
        char tmp[3] ;
        memcpy(tmp, card[i], sizeof(tmp)) ;
        memcpy(card[i], card[r], sizeof(tmp)) ;
        memcpy(card[r], tmp, sizeof(tmp)) ;
    }

}
