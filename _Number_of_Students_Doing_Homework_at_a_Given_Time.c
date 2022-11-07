#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q,c=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> m;
    int arr1[m];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    cin >> q;
    for(int i=0;i<n;i++){
        if(arr[i]<=q and arr1[i]>=q){
            c+=1;
            }
    }
    cout << c;
}