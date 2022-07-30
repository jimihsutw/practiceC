#include <stdio.h>
#include <string.h>

int main() {
    int n, negtive=0;
    int in[100] ;

    memset(in, 0, sizeof(in)) ;
    scanf("%d", &n) ;

    for (int i=0;i<n;i++) {
        scanf("%d", &in[i]) ;
        if (in[i]<0) {
            negtive++ ;
        }
    }

    printf("%d\n", negtive) ;

    return 0 ;
}