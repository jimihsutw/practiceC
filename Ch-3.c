#include<stdio.h>
#include<math.h>
#include<string.h>
#define SIZE 100

int main() {

    // CH 3-1 逆序輸出
/*
    int ary[SIZE];
    int cnt;

    cnt = 0;
    while (scanf("%d", ary+cnt) == 1) {
        cnt++;
    }
    printf("count %d\n", cnt);

    for (; cnt > 1;) {
        printf("%d", ary[--cnt]);
    }
    printf("%d\n", ary[--cnt]);
*/

    // 3-1 開燈問題
/*
    int length = 1001;
    int ary[length];
    int n, k, c, offset;

    scanf("%d%d", &n, &k);

    // switch
    for (c = 1; c <= k; c++) {
        for (offset = c; offset <= n;) {
            // printf("offset%d\n", offset);
            if (offset ==1) {
                ary[offset] = 1;
            } else {
                if (ary[offset] == 1) {
                    ary[offset] = 0;
                } else {
                    ary[offset] = 1;
                }
            }
            offset += c;
        }
    }

    for (c = 1; c <= n;c++) {
        if (ary[c]==1) {
            printf("%d ", c);
        }
    }
    printf("\n");
*/

    // 3-2 蛇形填數
    /*
    int n, total;
    int len=10;
    int ary[len][len];
    int x, y;

    memset(ary, 0, sizeof(ary));
    scanf("%d", &n);
    x = n-1;
    y = 0;
    // 預填第一格
    total = ary[x=n-1][y=0] = 1;

    while (total <n*n) { // 填下一格
        while(y+1 < n && ary[x][y+1] == 0) {
            ary[x][++y] = ++total;
            // printf("x=%d, y=%d, val=%d\n", x, y, total);
        }
        while(x>0 && ary[x-1][y] == 0) {
            ary[--x][y] = ++total;
            // printf("x=%d, y=%d, val=%d\n", x, y, total);
        }
        while(y >0 && ary[x][y-1] == 0) {
            ary[x][--y] = ++total;
            // printf("x=%d, y=%d, val=%d\n", x, y, total);
        }
        while(x<n && ary[x+1][y] == 0) {
            ary[++x][y] = ++total;
            // printf("x=%d, y=%d, val=%d\n", x, y, total);
        }
    }

    for (y=0;y<n;y++) {
        for (x=0;x<n;x++){
            // printf("x=%d, y=%d, val=%d ", x, y, ary[x][y]);
            printf("%3d ", ary[x][y]);
        }
        printf("\n");
    }
    */

    //3-3 豎式問題
    
    char s[20], buf[99];
    int count = 0;
    scanf("%s", s);
    for (int abc = 100; abc <= 999; abc++) 
    {
        for (int de = 10; de <= 99; de++)
        {
            int x = abc*(de % 10);
            int y = abc*(de / 10);
            int z = abc * de;
            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            for (int i = 0; i < strlen(buf); i++)
                if (strchr(s, buf[i]) == NULL) ok = 0;
            if (ok) {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
            }
        }                
    }
    printf("The number of solutions = %d\n", count);
    

    return 0;
}