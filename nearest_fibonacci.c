#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1,c=0;
    cin >> n;
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(b-n >n-a)
    cout<<a;
    else if(b-n<n-a)
    cout<<b;
    else
    cout<<a<<" "<<b;
}