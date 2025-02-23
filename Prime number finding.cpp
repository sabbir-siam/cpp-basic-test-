#include <iostream>
using namespace std;
/*A prime number (or a prime) is a natural number greater than 1 
that is not a product of two smaller natural numbers. 
A natural number greater than 1 that is not prime is called a composite number. 
For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself. 
However, 4 is composite because it is a product (2 × 2) in which both numbers are smaller than 4.*/

 Prime(int n) {
    if (n <= 1) {
        return false; 
    }
    
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int num;
    cout << "Enter an integar number: ";
    cin >> num;

    if (Prime(num)) 
        cout << num << " is a prime number." << endl;
     else 
        cout << num << " is not a prime number." << endl;
    

    return 0;
}

