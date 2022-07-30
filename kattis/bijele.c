#include <stdio.h>

int main() {
    int correct[6] = {1, 1, 2, 2, 2, 8} ;
    int input[6] ;

    scanf("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]) ;

    printf("%d %d %d %d %d %d\n", correct[0]-input[0], correct[1]-input[1], correct[2]-input[2], correct[3]-input[3], correct[4]-input[4], correct[5]-input[5]) ;

    return 0 ;
}