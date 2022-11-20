#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    bool c=false;
    int n;
    int min, max;

    n=readint();
    int ans[n]={0};
    for (int i=0;i<n;i++) {
        ans[i] =readint(); 
    }
    sort(ans, ans+n);

    for (int i=0;i<n-1;i++) {
        if (i==0) {
            min=ans[i];
        }
        max=ans[i+1];

        if (ans[i]==ans[i+1]-1) { // continue
            c=true;
        } else { // 不連續
            c=false;
            max=ans[n-1];
            break;
        }
    }

    cout<<min<<' '<<max<<' ';
    if (c) {
        cout<<"yes";
    } else {
        cout<<"no";
    }
    cout<<endl;

    return 0;
}