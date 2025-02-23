#include <iostream>
#include <cmath>
using namespace std;

int Series(int n) {
    int sum = 0;
    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        int term = pow(i, 2);
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term;
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

