#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int j=0;
    for(int i=0;i<n;i++){
        cin >> j;
        arr.push_back(j);
    }
    int c=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        string s=to_string(x);
        if(s.size()%2==0){
            c+=1 ;
        }
    }
    cout << c;
}