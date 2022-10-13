#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x=n,rev=0;
    while(n){
        int d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(x==rev) cout << "True";
    else cout << "False";
}