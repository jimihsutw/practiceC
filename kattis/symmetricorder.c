#include <stdio.h>
#include <string.h>

int main() {
    int n;

    char names[15][26] = {0} ;
    int cnt = 0 ;

    do {
        scanf("%d", &n) ;
        if (n == 0) {
            break ;
        }
        cnt++ ;

        memset(names, 0, sizeof(names)) ;
        for (int i=0;i<n;i++ ) {
            scanf("%s", names[i]) ;
        }

        printf("SET %d\n", cnt) ;

        for (int i=0;i<n;i=i+2) {
            printf("%s\n", names[i]) ;
        }
        for (int i=(n%2==0?n-1:n-2);i>0;i=i-2) {
            printf("%s\n", names[i]) ;
        }


    } while (n != 0) ;


    return 0 ;
}
