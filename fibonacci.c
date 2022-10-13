#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0,b=1,c;
    cout << a << " " << b << " ";
    int co=2;
    while(n>co){
        c=a+b;
        a=b;
        b=c;
        cout << c << " ";
        co++;
    }
}