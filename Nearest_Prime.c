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
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n ;
    for(int i=n;i<10000;i++){
        if(prime(i)){
            x=i;
            break;
        }
    }
    for(int i=n;i>0;i--){
        if(prime(i)){
            y=i;
            break;
        }
    }
    if((abs(n-x))==(abs(n-y))){
        cout << y << endl;
    }
    else if((abs(n-x))>(abs(n-y))){
        cout << y << endl;
    }
    else{
        cout << x << endl;
    }
    }
}