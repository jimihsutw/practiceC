#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;

int main() {
    int  n, m;
    cin>>n>>m;

    string name[n];
    string password[n];
    string result[m];

    for(int i=0;i<n;i++) {
        string tmp, pwd;
        cin>>tmp>>pwd;
        name[i]=tmp;
        password[i]=pwd;
    }

    int cmd;
    string nm, pwd;
    for(int i=0;i<m;i++) {
        cin>>cmd>>nm>>pwd;
        if (cmd==1) { // login
            for (int j=0;j<n;j++) {
                if (name[j]==nm)  {
                    if (password[j]==pwd) {
                        result[i]="Yes";
                    } else {
                        result[i]="No";
                    }
                    break;
                }
            }
        } else { // modify
            for (int j=0;j<n;j++) {
                if (name[j]==nm)  {
                    password[j]=pwd;
                    result[i]="Yes";
                    break;
                }
            }
        }
    }

    for(int i=0;i<m;i++) {
        cout<<result[i]<<endl;
    }

}