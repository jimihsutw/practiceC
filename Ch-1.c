#include<stdio.h>
#include<math.h>
//#define M_PI 3.14159

int main() {
    // 1.1
    //printf("-->%.1f", sqrt(9));

    // 1-1 圓柱體的表面積
    /*
    double r, h, s1, s2, s;
    scanf("%lf%lf", &r, &h);
    s1 = M_PI * r * r;
    s2 = 2 * M_PI * r * h;
    s = 2.0 * s1 + s2;
    printf("Area = %.3lf", s);
    */

   // 1-2 三位數反轉
/*   
    int a, a1, a2, a3;
    scanf("%d", &a);

    a1 = a % 10;
    a2 = a/10 % 10;
    a3 = a/100 % 10;
    printf("%d%d%d", a1, a2, a3);
*/

    // 1-3 交換變數
/*
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", b, a);
*/

    // 1.4 雞兔同籠
/*
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    // a+b=n, b=n-a
    // 2a+4b=m, b=(m-2a)/4
    // 4n-4a=m-2a
    // a=(4n-m)/2
    // b=n-a
    a = 4 * n - m;
    a = a / 2;
    b = n - a;
    if (m%2 !=0 || a<0 || b < 0) {
        printf("No answer");
    } else {
        printf("%d %d", a, b);
    }
*/

    // 1-5 三整數排序
/*
    int a, b, c, max, min;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    min = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    a = a + b + c - min - max;
    printf("%d %d %d", min, a, max);
*/


        return 0;
}