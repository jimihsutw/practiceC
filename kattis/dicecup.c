#include <stdio.h>
#include <string.h>

int main() {
    int d1, d2, max = 0;
    char result[41] ={0} ;

    scanf("%d %d", &d1, &d2) ;

    for (int i=1;i<=d1;i++) {
        for (int j=1;j<=d2;j++) {
            result[i+j] += 1;
        }
    }

    // 找出最大值
    for (int i=2;i < 41; i++) {
        if (result[i] != 0 && result[i] > max) {
            max = result[i] ;
        }
    }

    // 列印最大值的元素
    for (int i=2;i < 41; i++) {
        if (result[i] == max) {
            printf("%d\n", i) ;
        }
    }

    return 0 ;
}