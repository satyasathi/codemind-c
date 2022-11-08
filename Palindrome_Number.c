#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int rev=0,r,n,temp;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    }
}