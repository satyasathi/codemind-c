#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x=n;
     int rev=0;
     int d;
    while(n){
        d=n%10 ;
        n=n/10 ;
        rev=rev*10+d ;
    }
    n=rev;
    int i=1,s=0;
    while(n){
        d=n%10;
        n=n/10;
        s+=pow(d,i);
        i++;
    }
    if(s==x){
        cout << "True";
    } 
    else cout << "False";
    
}