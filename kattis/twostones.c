#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n) ;

    if (n%2==0) {
        printf("Bob\n") ;
    } else {
        printf("Alice\n") ;
    }

    return 0 ;
}