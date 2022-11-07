#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=i;j<n;j++){
            d+=arr[j];
            if(d==k){
                c+=1;
            }
        }
    }
    cout << c;
}