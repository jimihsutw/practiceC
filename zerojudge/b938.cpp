#include<iostream>
using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0)

int main() {
    fastio;

    int n, m, x;

    cin>>n>>m;
    char line[n] = {0} ;

    for (int i = 0; i < m; i++) {
        cin>>x;
        if (x>=n || line[x-1]==1) {
            printf("0u0 ...... ?\n");
            continue;
        }

        char find=0;
        for (int j=x;j<n;j++) {
            if (line[j]!=1) {
                find=1;
                printf("%d\n", j+1);
                line[j]=1;
                break ;
            }
        }
        if (find==0) {
            printf("0u0 ...... ?\n");
        }
    }

    return 0;
}