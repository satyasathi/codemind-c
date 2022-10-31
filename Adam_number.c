#include <iostream>
using namespace std;
int reverseDigits(int num) {
   int rev = 0;
   while (num > 0) {
      rev = rev * 10 + num % 10;
      num /= 10;
   }
   return rev;
}
int main() {
    int num;
    cin >> num;
   int rev = reverseDigits(num);
   if ( (num*num) == (reverseDigits(rev*rev)) )
      cout << "True";
   else
      cout << "False";
   return 0;
}