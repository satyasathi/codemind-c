#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>10){
        int x=0,d;
        while(n){
            d=n%10;
            n=n/10;
            x+=d;
        }
        n=x;
    }
    cout << n;
}