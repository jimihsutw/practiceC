#include <stdio.h>
#include <string.h>

int main() {
    int n ;
    int rev[100000] ;

    memset(rev, 0, sizeof(n)) ;
    scanf("%d", &n) ;

    for (int i=n-1;i>=0;i--) {
        scanf("%d", &rev[i]) ;
    }

    for (int i=0;i<n;i++) {
        printf("%d\n", rev[i]) ;
    }

    return 0 ;
}