#include <stdio.h>
#include <string.h>

int main() {
    int n, x, m, total;

    x = scanf("%d %d", &n, &m) ;

    total = n*(m-1) + 1 ;

    printf("%d\n", total) ;

    return 0 ;
}