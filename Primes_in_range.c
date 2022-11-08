#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    if(n<=1)
    return false;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    return true;
    else
    return false;
}
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        count++;
    }
    cout<<count;
}