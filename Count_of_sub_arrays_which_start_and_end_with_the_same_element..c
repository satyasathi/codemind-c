#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                c+=1;
            }
        }
    }
    cout << c;
}