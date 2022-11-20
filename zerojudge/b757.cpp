#include<iostream>
#include<string>
using namespace std;

int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    double ans, in;

    cin>>in;
    ans = in*9/5+32;
    cout<<ans;


    return 0;
}
