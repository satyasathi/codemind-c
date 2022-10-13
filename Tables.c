#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin >> n >> r;
    for(int i=1;i<=r;i++){
        if(i%2!=0){
            cout << n << " x " << i << " = "  << n*i << "
";
        }
    }
}