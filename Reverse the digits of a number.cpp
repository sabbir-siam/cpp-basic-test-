#include <iostream>
using namespace std;
//i.e. 123456 to 654321
int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10; 
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Reversed number: " << reverse(num) << endl;
    
}

