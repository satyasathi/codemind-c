#include <iostream>
using namespace std;

// function to calculate factorial
int facto(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num;
    cin >> num;
    
    if(detectStrong(num))
        cout << "The number " << num << " is a strong number";
    else
        cout << "The number " << num << " is not a strong number";

}