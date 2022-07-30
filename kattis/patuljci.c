#include <stdio.h>
#include <string.h>

int main() {
    int n[9] = {0};
    int sum = 0 ;

    for (int i=0;i<9;i++) {
        scanf("%d", &n[i]) ;
        sum += n[i] ;
    }

    // 找出那二個數加起來 ＝ 超過 100 的數字合
    sum -= 100 ;
    int found = 0 ;
    for (int i=0;i<9 && found==0 ;i++) {
        for (int j=1;j<9;j++) {
            if (n[i] + n[j] == sum) {
                n[i] = n[j] = 0 ;
                found = 1 ;
                break ;
            }
        }
    }

    for (int i=0;i<9;i++) {
        if (n[i] != 0 ) {
            printf("%d\n", n[i]) ;
        }
    }


    return 0 ;
}