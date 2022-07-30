#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add(char ans[14], int limit, int element) ;
int pop(char ans[14], int element);

int main() {
    int n, x, m;
    char ans[14] = {0} ;

    x = scanf("%d", &n) ;

    for (int i=0;i<n;i++) {
        x = scanf("%d", &m) ;

        int element = 0 ;
        for (int j=m;j>0;j--) {
            add(ans, j, element++) ;

            for (int k=j;k>0 && element>1;k--) {
                add(ans, pop(ans, element), element) ;
            }
        }


        for (int k=0;k<m;k++) {
            printf("%d ", ans[k]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}

void add(char ans[14], int limit, int element) {
    if (element != 0) {
        memcpy(&ans[1], &ans[0], sizeof(ans[0])*element) ;
    }
    ans[0] = limit ;
}

int pop(char ans[14], int element) {
    int r = ans[element-1] ;
    ans[element-1] = 0 ;
    return r ;
}
