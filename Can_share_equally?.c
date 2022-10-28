#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    if(x%2!=0){
        cout << "NO";
    }
    else if(x==0 and y%2!=0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}