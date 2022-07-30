#include <stdio.h>
#include <string.h>

int main() {
    int n, x, z, used;
    int left=0, total=0;

    z = scanf("%d", &x) ;
    z = scanf("%d", &n) ;

    total = x*(n+1) ;
    for (int i=0;i<n;i++) {
        z = scanf("%d", &used) ;
        total -= used ;
    }

    printf("%d\n", total) ;

    return 0 ;
}