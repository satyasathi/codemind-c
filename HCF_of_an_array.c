#include<bits/stdc++.h>
using namespace std;
int practice(int x, int y){
    while(y){
        if(x>y){
            swap(x,y);
        }
        y=y%x;
    }
    return x;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int z;
    z=arr[0];
    for(int i=1;i<n;i++){
        z=practice(z,arr[i]);
    }
    cout << z;
    
}