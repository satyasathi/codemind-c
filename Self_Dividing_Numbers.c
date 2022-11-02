#include <bits/stdc++.h> 
using namespace std; 
bool divisible(int n){
    int d,c=0,c1=0,x=n;
    while(n){
        d=n%10;
        n=n/10;
        c1++;
        if(d!=0){
        if(x%d==0){
            c+=1;
    }
        }
    }
        if(c==c1) return 1;
        else return 0;
}
  
int main(){ 
    int n,m;
    cin >> n;
    cin >> m;
    for(int i=n;i<=m;i++){
        if(divisible(i)) 
            cout<<i<<" ";
    }
}
