#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n;
        cin >> n;
        int f=1;
        for(int i=n;i>0;i--){
            f*=i;
        }
        cout << f << endl;
    }
}