#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0;
    cin >> n;
    float x;
    x=sqrt(n);
    if(x*x==int(x)){
        d=1;
    }
    int s=0;
    for(int i=2;i<int(x)+1;i++){
        if(n%i==0){
            s+=i+(n/i);
        }
    }
    if(d==1){
        s-=int(x);
        s+=1;
    }
    else{
        s+=1;
    }
    if(s>n) cout << "True";
    else cout << "False";
}