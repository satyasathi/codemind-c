#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0,mx=-1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c+=1;
            }
        }
        if(c==1){
            d=1;
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
    }
    if(mx!=-1) cout << mx;
    else cout << -1;
}
    