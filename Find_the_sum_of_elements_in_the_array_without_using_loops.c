#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    cin>>x[i];
    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    cout<<sum;
}