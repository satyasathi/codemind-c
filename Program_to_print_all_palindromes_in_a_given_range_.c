#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int rev=0,r,temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    return true;
    else
    return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isPalindrome(i))
        cout<<i<<" ";
    }
}