#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0)

/*不需要考慮負數*/
int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

void tran(int n) {
    char ret[32]={0};

    int i=0;
    while (n>1) {
        if (n%2==1) {
            ret[i++]='1';
        }else {
            ret[i++]='0';
        }
        n/=2;
    }
    ret[i++]='1';

    for (short j=31;j>=0;j--) {
        if (ret[j] != 0) {
            printf("%c", ret[j]);
        }
    }
    printf("\n");

}

int main() {
    fastio;
    int r;

    while (scanf("%d", &r) != EOF) {
        tran(r);
    }


    return 0;
}
