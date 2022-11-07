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
    int n1,n2;
    cin >> n1;
    cin >> n2;
    for(int i=n1;i<n2;i++){
        if(prime(i)){
            cout << i << endl;
        }
    }
}