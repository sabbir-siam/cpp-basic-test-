#include <iostream>
using namespace std;


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

