#include <stdio.h>

int main() {
    int n, p ;
    char s[1000] ;

    scanf("%d %d", &n, &p) ;

    for (int i=0;i<n;i++) {
        scanf("%s", s) ;
    }

    printf("%d\n", p) ;

    return 0 ;
}