#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r,c=0;
        cin >> l >> r;
        for(int i=l;i<=r;i++){
            if((i%10==2) or (i%10==3) or (i%10==9)){
                c+=1;
            }
        }
        cout << c << endl;
    }
}