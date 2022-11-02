#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,s=0,m=1;
    cin >> n;
    while(n){
        d=n%10;
        n=n/10;
        s+=d;
        m*=d;
    }
    if(s==m) cout << "Spy Number";
    else cout << "Not Spy Number";
}