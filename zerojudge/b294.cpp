#include<iostream>
#include<string>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    fastio;
    
    int days, amt=0;

    days=readint();
    for (int i=1;i<=days;i++) {
        int x=readint();
        amt+=i*x;
    }
    printf("%d\n", amt);

    return 0;
}