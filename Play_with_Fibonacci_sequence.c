#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,i=0,c;
    int n;
    cin >> n;
    cout << a << " " << b << " ";
    while(i<n-2){
        c=a+b;
        cout << c << " ";
        a=b;
        b=c;
        i++;
    }
}