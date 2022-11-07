#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int c=0,mx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            c++;
        }
        else{
            if(c>mx){
                mx=c;
            }
            c=0;
        }
    }
    if(mx==0){
    cout << c;
}
else{
    if(c>mx){
        mx=c;
    }
    cout << mx;
}
}
