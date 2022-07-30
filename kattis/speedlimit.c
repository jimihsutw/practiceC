#include <stdio.h>

int main() {
    int n=0 ;
    int miles, speed, prev, now ;
    int record[10] ;
    int count = 0 ;    

    while (1) {
        scanf("%d", &n) ;
        if (n < 0) break ;

        miles=0, speed=0, prev=0, now=0 ;

        for (int i=0;i<n;i++) {
            scanf("%d %d", &speed, &now) ;

            miles += (now-prev)*speed ;
            prev = now ;
        }
        record[count++] = miles ;
    }

    for (int i=0;i<count;i++) {
        printf("%d miles\n", record[i]) ;
    }

    return 0 ;
}