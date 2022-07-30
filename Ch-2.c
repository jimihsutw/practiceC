#include<stdio.h>
#include<math.h>

int main() {

    // 2-1 aabb
/*
    int a, b, m;
    double n;

    for (a = 1; a <= 9;a++) {
        for (b = 0; b <= 9;b++) {
            m = a * 1100 + b * 11;
            n = sqrt(m);
            // 判斷 n 是否為整數
            if (floor(n+0.5) == n) {
                printf("%d\n", m);
            }

        }
    }
*/
    // 2-1 aabb 另一種方法
/*
    int x, n;
    int hi, lo;

    for (x = 1;; x++) {
        n = x * x;
        hi = n / 100;
        lo = n % 100;
        if (n < 1000)
            continue;
        if (n>9999)
            break;

        if (hi/10==hi%10 && lo/10==lo%10) {
            printf("%d", n);
        }
    }
*/

    //2-2 3n+1
/*
    long long n;
    int cnt;
    scanf("%lld", &n);

    cnt = 0;
    while (n > 1) {
        cnt++;
        if (n%2==1) {
            n = (3*n + 1)/2;
            cnt++;
        } else {
            n = n / 2;
        }
        // printf("%ld\n", n);
    }
    printf("%d", cnt);
*/

    //2-3階乘之和
/*
    const int MOD = 1000000;
    int cnt, i, j;
    int sum=0;

    scanf("%d", &i);

    // int f = 1;
    for (cnt = 1; cnt <= i;cnt++) {
        // f *= cnt;
        int f = 1;
        for (j = 1; j <= cnt;j++) {
            f = f*j%MOD;
        }
        sum = (sum+f)%MOD;
    }
    printf("%d\n", sum);
*/

    // 2-4 資料統計
/*
    int i, max=0, min=-1, cnt=0, sum=0;
    while (scanf("%d", &i) == 1) {
        cnt++;
        sum += i;
        if (max < i)
            max = i;
        if (min==-1) {
            min = i;
        }else if (min > i) {
            min = i;
        }
    }
    printf("max=%d, min=%d, avg=%.2f", max, min, (float)(sum / cnt));
*/
    long int a;
    printf("sizeof=%lld", sizeof(a));

    return 0;
}