#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin >> n;
    int mx=0;
    while(n){
        d=n%10;
        n=n/10;
        if(d>mx) mx=d;
    }
    cout << mx;
}