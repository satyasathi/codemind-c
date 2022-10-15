#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0,b=1,c=0,d=1;
    while(c<n){
        c=a+b;
        if(n==c){
            d=0;
            break;
        }
        a=b;
        b=c;
    }
    if(d!=0){
        cout << "False";
    }
    else cout << "True";
}