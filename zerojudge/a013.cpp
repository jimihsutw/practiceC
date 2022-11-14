#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0)

int readint();
int tran(char c);
int parse(string s);
string rparse(int n);

int readint() {
    int x;
    scanf("%d", &x);
    return x;
}

string rparse(int n) {
    int a, p;
    string ret = "";
        if (n>=1000) {
            a=n/1000;
            ret.append(a, 'M');
            n-=a*1000;
        }
        if (n>=900) {
            ret.append("CM");
            n-=900;
        }
        if (n>=500) {
            a=n/500;
            ret.append(a, 'D');
            n-=a*500;
        }
        if (n>=400) {
            ret.append("CD");
            n-=400;
        }
        if (n>=100) {
            a=n/100;
            ret.append(a, 'C');
            n-=a*100;
        }
        if (n>=90) {
            ret.append("XC");
            n-=90;
        }
        if (n>=50) {
            a=n/50;
            ret.append(a, 'L');
            n-=a*50;
        }
        if (n>=40) {
            ret.append("XL");
            n-=40;
        }
        if (n>=10) {
            a=n/10;
            ret.append(a, 'X');
            n-=a*10;
        }
        if (n>=9) {
            ret.append("IX");
            n-=9;
        }
        if (n>=5) {
            a=n/5;
            ret.append(a, 'V');
            n-=a*5;
        }
        if (n>=4) {
            ret.append("IV");
            n-=4;
        }
        if (n>=1) {
            ret.append(n, 'I');
        }

    return ret;
}

int tran(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int parse(string s) {
    int sum=0;
    for (int i=0;i<s.length();i++) {
        if (i!=s.length()-1 && tran(s[i+1])>tran(s[i])) {
            sum+=tran(s[i+1])-tran(s[i]);
            i++;
        } else {
            sum+=tran(s[i]);
        }
    }

    return sum;
}

int main() {
    fastio;
    string s1, s2;

    while (cin>>s1 && s1!="#") {
        cin>>s2;
        //cout<<parse(s1)<<":"<<parse(s2)<<endl;
        int ans=abs(parse(s1)-parse(s2));
        //printf("ans:%d\n", ans);
        if (ans==0) {
            cout<<"ZERO\n";
        } else {
            cout<<rparse(ans)<<'\n';
        }
    }


    return 0;
}