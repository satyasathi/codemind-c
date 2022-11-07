#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int c=0,d=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            d+=1;
        }
        if(i%2==0 and arr[i]%2==0){
            c+=1;
        }
    }
    if(c==d){
        cout << "True";
    }
    else{
        cout << "False";
    }
}