#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,m;
    cin >> x >> y >> m;
    int s=pow(x,y);
    cout << s%m;
}