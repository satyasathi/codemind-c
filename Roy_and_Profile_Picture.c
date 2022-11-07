#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin >> l;
    int n;
    cin >> n;
    int w,h;
    while(n--){
        cin >> w >> h;
        if((w<l) or (h<l)){
            cout << "UPLOAD ANOTHER" << endl;
        }
        else if(w==h){
            cout << "ACCEPTED" << endl;
        }
        else{
            cout << "CROP IT" << endl;
        }
    }
}