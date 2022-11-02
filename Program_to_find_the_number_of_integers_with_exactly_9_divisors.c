#include<bits/stdc++.h>
using namespace std;
bool fact(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==9) return 1;
    else return 0;
}
int main(){
    int n,d=0;
    cin >> n;
    for(int i=1;i<=n;i++){
    if(fact(i)){
        d++;
        cout << i << " ";
    }
    }
    cout << "
Total=" << d;
    
    
}