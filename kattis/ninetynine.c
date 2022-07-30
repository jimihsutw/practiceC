#include <stdio.h>
#include <string.h>
#define GOAL 99

/*
https://open.kattis.com/problems/ninetynine

SECRET  ACCEPTED (60/100)
GROUP 1 ACCEPTED (30/30)
GROUP 2 ACCEPTED (30/30)
GROUP 3 WRONG ANSWER (0/40)
*/
int main() {
    int n=0, left, x, in ;

    while (1) {
        left = GOAL - n ;
        if (left <= 2) { // win
            break ;
        } else if (left == 5) { // will win
            printf("%d\n", n+2) ;
            n+=2 ;
        } else if (left%2==1 || left == 4) { // 50% to win
            printf("%d\n", n+1) ;
            n+=1 ;
        } else {
            printf("%d\n", n+2) ;
            n+=2 ;
        }

        fflush(stdout) ;
        x = scanf("%d", &in) ;
        if ((in - n) != 1 && (in - n) != 2) {
            return 0 ;
        } else {
            n += (in-n) ;
            if (n>=GOAL) {
                return 0 ;
            }
        }
    }

    printf("99\n") ;

    return 0 ;
}