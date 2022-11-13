#include<iostream>
#include<string>
#include<math.h>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

int main() {
    fastio;

    int n, m;

    cin>>n>>m;

    int a[7]={0};
    char found='0';
    for (int i=n;i<=m;i++) {
        a[0]=i/1000000;
        a[1]=i/100000%10;
        a[2]=i/10000%10;
        a[3]=i/1000%10;
        a[4]=i/100%10;
        a[5]=i/10%10;
        a[6]=i%10;

        int tmp=0;
        int p=0;

            char start='0';
            for (int j=0;j<7;j++) {
                if (start=='0' && a[j]!=0) {
                    start='1';
                    p=7-j;
                }

                if (start=='1') {
                    tmp+=pow(a[j], p);
                }
            }

            if (i==tmp) {
                //cout<<"pow="<<p<<'\n';
                cout<<tmp<<' ';
                found='1';
            }
    }
    if (found=='0') {
        cout<<"none\n";
    }

    return 0;
}