#include <stdio.h>
#include <string.h>

int main() {
    int r, c, zr, zc;
    char in[50][51]={0} ;
    char ans[250][251]={0} ;

    scanf("%d %d %d %d", &r, &c, &zr, &zc) ;

    for (int i=0;i<r;i++) {
        scanf("%s", in[i]) ;

        // expand column
        for (int j=0;j<c;j++) {
            for (int k=0;k<zc;k++) {
                ans[i][j*zc+k] = in[i][j] ;
            }
        }
    }

    // expand row
    for (int i=r;i>0;i--) {
        for (int k=0;k<zr;k++) {
            memcpy(ans[i*zr-k-1], ans[i-1], sizeof(ans[i-1])) ;
        }
    }

    for (int i=0;i<r*zr;i++) {
        printf("%s\n", ans[i]) ;
    }

    return 0 ;
}