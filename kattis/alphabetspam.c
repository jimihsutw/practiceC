#include <stdio.h>
#include <string.h>

int main() {
    char input[100000]={0} ;
    int whitespace=0, lowercase=0, uppercase=0, symbols=0 ;
    int count=0 ;

    scanf("%s", input) ;

    for (int i=0;i<100000;i++) {
        if (input[i]==0) {
            break ;
        }

        ++count ;

        if (input[i]=='_') {
            whitespace++ ;
        } else if (input[i]>='a' && input[i]<='z') {
            lowercase++ ;
        } else if (input[i]>='A' && input[i]<='Z') {
            uppercase++ ;
        } else {
            symbols++ ;
        }
    }

    printf("%f\n", (float)whitespace/count) ;
    printf("%f\n", (float)lowercase/count) ;
    printf("%f\n", (float)uppercase/count) ;
    printf("%f\n", (float)symbols/count) ;

    return 0 ;
}