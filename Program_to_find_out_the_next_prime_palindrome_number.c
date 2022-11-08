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
    if(rev==temp)
    return true;
    else
    return false;
}
bool isPrime(int n)
{
    int c=0;
    if(n==1)
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
    int n;
    cin>>n;
    for(int i=n+1;;i++)
    {
        if(isPalindrome(i) && isPrime(i))
        {
            cout<<i;
            break;
        }
    }
}