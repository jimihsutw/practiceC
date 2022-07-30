#include <stdio.h>

int power(int, int) ;

int main() {

    for (int i=0; i<=10; i++) {
        printf("%d\n", power(2, i)) ;
    }

    return 0 ;
}

int power(int base, int p) {

    int r = 1 ;
    for (int c=1;c<=p;c++) {
        r = base*r ;
    }

    return r ;

}