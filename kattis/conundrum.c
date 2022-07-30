#include <stdio.h>
#include <string.h>

int main() {
    int n, len, left, count=0 ;
    char cipher[301] = {0};

    scanf("%s", cipher) ;

    len = strlen(cipher) ;
    for (int i=0;i<len;i++) {
        left=(i+1)%3;

        switch (left) {
            case 0:
                if (cipher[i]!='R') {
                    count++ ;
                }
            break ;
            case 1:
                if (cipher[i]!='P') {
                    count++ ;
                }
            break ;
            case 2:
                if (cipher[i]!='E') {
                    count++ ;
                }
            break ;
        }
    }

    printf("%d\n", count) ;

    return 0 ;
}