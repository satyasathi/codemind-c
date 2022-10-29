#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin >> n;
    int s=0,m=1;
    while(n){
        d=n%10;
        n=n/10;
        s+=d;
        //cout << d << 1 << "
";
        m*=d;
        //cout << m << 2<< "
";
    }
    cout << m-s;
}