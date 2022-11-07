#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==0 or n==1){
        return 0;
    }
    else{
        int x=sqrt(n);
        for(int i=2;i<x+1;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main(){
    int n1,n2,n3;
    cin >> n1 ;
    cin >> n2;
    n1=n1+n2;
    for(int i=1;i<1000;i++){
        n1+=1;
        if(prime(n1)){
            cout << i;
            break;
        }
    }
}