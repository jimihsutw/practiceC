#include<iostream>
#include<string>
using namespace std;

int main() {
    int y=0;
    
    while (cin>>y) {
        if ((y%4==0 && y%100 !=0) || y%400==0 ) {
            cout<<"閏年\n";
        } else {
            cout<<"平年\n";
        }
    }


    return 0;
}