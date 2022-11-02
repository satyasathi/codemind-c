#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    float n;
    n=sqrt(x);
    int m=sqrt(x);
    if(n*n==m*m){
        cout << "True";
    }
    else{
        cout << "False";
    }
}