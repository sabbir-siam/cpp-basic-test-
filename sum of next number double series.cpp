#include <iostream>
using namespace std;

int Series(int n) {
    int sum = 0, term = 2;
    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term;
        term *= 2;
    }
    cout << " = " << sum << endl;
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Sum of series: " << Series(num) << endl;
    
}
