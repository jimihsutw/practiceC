#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;

int main() {
    int  n, m;
    cin>>n>>m;

    string name[n][2];
    char ret[m]={0};

    for(int i=0;i<n;i++) {
        cin>>name[i][0]>>name[i][1];
    }

    int cmd;
    string nm, pwd;
    for(int i=0;i<m;i++) {
        cin>>cmd>>nm>>pwd;
        if (cmd==1) { // login
            for (int j=0;j<n;j++) {
                if (name[j][0]==nm)  {
                    if (name[j][1]==pwd) {
                        ret[i]='1';
                    } else {
                        ret[i]='2';
                    }
                    break;
                }
            }
        } else { // modify
            for (int j=0;j<n;j++) {
                if (name[j][0]==nm)  {
                    name[j][1]=pwd;
                    ret[i]='1';
                    break;
                }
            }
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