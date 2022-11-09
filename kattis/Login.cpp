#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;

int main() {
    int  n, m;
    cin>>n>>m;
    string name, pwd;

    map<string, string> np;
    char ret[m]={0};

    for(int i=0;i<n;i++) {
        cin>>name>>pwd;
        np[name]=pwd;
    }

    int cmd;
    for(int i=0;i<m;i++) {
        cin>>cmd>>name>>pwd;
        if (cmd==1) { // login
            if (np[name]==pwd)  {
                ret[i]='1';
            } else {
                ret[i]='2';
            }
        } else { // modify
            np[name]=pwd;
            ret[i]='1';
        }
    }

    for(int i=0;i<m;i++) {
        if (ret[i]=='1') {
            cout<<"Yes";
        } else {
            cout<<"No";
        }
        cout<<endl;
    }

}