#include <iostream>
using namespace std;

Divisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Divisors(num);
    
    return 0;
}

