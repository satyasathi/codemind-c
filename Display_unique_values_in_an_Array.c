#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    int d=0;
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
            cout << arr[i] << " ";
        }
    }
    if(d==0){
        cout << -1;
    }
}