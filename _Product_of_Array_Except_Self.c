#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int c=1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        c*=arr[i];
    }
    for(int i=0;i<n;i++){
        cout << c/arr[i] << " ";
    }
}