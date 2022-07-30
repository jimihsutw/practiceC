#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n, tmp, base, p;
    long long total=0 ;


    scanf("%d", &n) ;

    for (int i=0;i<n;i++) {
        scanf("%d", &tmp) ;
        p = tmp%10 ;
        base = tmp/10 ;

        total += pow(base, p);
    }

    printf("%lld\n", total) ;

    return 0 ;
}