#include <stdio.h>
#include <string.h>

int main() {
    int e,f,c ;
    int total=0, ans=0, left=0, tmp=0;

    scanf("%d %d %d", &e, &f, &c) ;

    total = e+f ;
    do {
        tmp = total/c ;
        left = total%c ;

        ans += tmp ;
        total = left+tmp ;
    } while (total >= c) ;

    printf("%d\n", ans) ;

    return 0 ;
}