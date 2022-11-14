#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0)


int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    fastio;
    int r, c;
    long long a[100][100]={0};

    while (scanf("%d%d", &r, &c) != EOF) {
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                a[i][j]=readint();
            }
        }

        for (int i=0;i<c;i++) {
            for (int j=0;j<r;j++) {
                printf("%d ", a[j][i]);
                //cout<<' ';
                if (j==r-1) {
                    printf("\n");
                }
            }
        }
    }
    //cout<<'\n';


    return 0;
}