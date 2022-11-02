#include <iostream>
#include <cmath>
using namespace std;
int lengthCount(int n){
   return floor(log10(n) + 1);
}
int diffFirstLastDigits(int n, int x) {
   int first, last, p, len;
   p = pow(10, x);
   last = n % p;
   len = lengthCount(n);
   while(len != x){
      n /= 10;
      len--;
   }
   first = n;
   return abs(first - last);
}
main() {
   int n, x;
   //cout << "Enter number and number of digits from first and last: ";
   cin >> n >> x;
   cout << diffFirstLastDigits(n,x);
}