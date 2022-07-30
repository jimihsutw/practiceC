#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[2048] ;

    scanf("%s", str) ;

    n = strlen(str) ;
    for (int i=0;i<n;i++) {
        if (str[i] == ':' || str[i]==';') {
            if (i+1 < n ) {
                if (str[i+1]==')') {
                    printf("%d\n", i) ;
                } else if (i+2 < n && str[i+1] == '-' && str[i+2] == ')') {
                    printf("%d\n", i) ;
                }
            }
        }
    }


    return 0 ;
}