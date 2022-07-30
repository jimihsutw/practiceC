#include <stdio.h>
#include <string.h>

int main() {
    int hands=0, score=0 ;
    char suit ;
    char cards[3] ;

    scanf("%d %c", &hands, &suit) ;

    for (int i=0;i<hands*4;i++) {
        scanf("%s", cards) ;

        switch (cards[0]) {
            case 'A':
                score+=11 ;
                break ;
            case 'K':
                score+=4 ;
                break ;
            case 'Q':
                score+=3 ;
                break ;
            case 'T':
                score+=10 ;
                break ;
            case 'J':
                if (cards[1]==suit) {
                    score+=20 ;
                } else {
                    score+=2 ;
                }
                break ;
            case '9':
                if (cards[1]==suit) {
                    score+=14 ;
                } else {
                    // score+=0 ;
                }
                break ;
            default:
                break ;
        }
    } // for (int i=0;i<hands;i++) {

    printf("%d\n", score) ;

    return 0 ;
}