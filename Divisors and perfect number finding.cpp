#include <iostream>
using namespace std;

Divisors(int n) {
    int sum = 0;
    cout << "Divisors of " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum of divisors (without " << n << "): " << sum << endl;
//    A perfect number is a number such that the sum of its divisors is equal to the number.
    if (sum == n) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    Divisors(num);
    return 0;
}
