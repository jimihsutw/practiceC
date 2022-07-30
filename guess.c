#include <stdio.h>
#include <stdlib.h>

int main() {
    int correct, highest = 1000, lowest = 1, guess;

    guess = (highest + lowest) / 2 ;
    scanf("%d", &correct);

    for(int i = 0; i < 10; i++) {
        if(guess < correct) {
            printf("%d:higher\n", guess);
            lowest = guess;
            guess = (lowest + highest) / 2 + 1;
        } else if(guess > correct) {
            printf("%d:lower\n", guess);
            highest = guess;
            guess = (highest + lowest) / 2;
        } else {
            printf("%d:correct", guess);
            break;
        }
    }
    return 0;
}