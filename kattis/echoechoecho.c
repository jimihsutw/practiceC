#include <stdio.h>
#include <string.h>

int main() {
    char in[15] ;

    scanf("%s", in) ;

    for (int i=0;i<2;i++) {
        printf("%s ", in) ;
    }
    printf("%s\n", in) ;


    return 0 ;
}