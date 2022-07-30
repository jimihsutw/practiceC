#include <stdio.h>

int main() {
    int n1, n2, n3, n4 ;
    int score=0, winner=0 ;

    for (int i=1;i<6;i++) {
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4) ;
        if ((n1+n2+n3+n4)>score) {
            score = n1+n2+n3+n4 ;
            winner = i ;
        }
    }

    printf("%d %d\n", winner, score) ;
    
    return 0 ;
}