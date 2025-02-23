#include <iostream>
using namespace std;

double Series(int n) {
    double sum = 0.0;
    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        cout << "(1/" << i << ")";
        if (i < n) {
            cout << " + ";
        }
        sum += 1.0 / i;
    }
    cout << " = " << sum << endl;
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Sum of the series: " << Series(num) << endl;
    
}

