#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>0){
        if(n>=0 and n<10){
            if(n==1 or n==7){
                cout << "True";
                break;
            }
            else{
                cout << "False";
                break;
            }
        }
        else{
            int x=0,d=0;
            while(n){
                d=n%10;
                n=n/10;
                x+=d*d;
            }
            n=x;
        }
    }
}