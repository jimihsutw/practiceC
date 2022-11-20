#include<iostream>
#include<string>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

int main() {
    fastio;
    
    int r, c;

    cin>>r>>c;

    int a[r][c]={0};

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            cin>>a[i][j];
        }
    }

    for (int j=0;j<c;j++) {
        for (int i=0;i<r;i++) {
            cout<<a[i][j];
            if (i!=r-1) cout<<' ';
        }
        cout<<'\n';
    }

    return 0;
}