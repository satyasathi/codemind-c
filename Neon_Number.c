#include <bits/stdc++.h>
using namespace std;
int isNeonNumber(int x) {
   int square = x * x;
   int digitsSum = 0;
   while (square != 0) {
      digitsSum += (square % 10);
      square = square / 10;
   }
   return digitsSum == x;
}
int main(){
    int n;
    cin >> n;
    if(isNeonNumber(n)){
        cout << "Neon Number";
    }
    else{
        cout << "Not Neon Number";
    }
}