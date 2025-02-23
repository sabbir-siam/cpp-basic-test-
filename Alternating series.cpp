#include <iostream>
using namespace std;
//Alternating series: 1 - 2 + 3 - 4 ..................... upto nth term
int Series(int n) {
    int sum = 0;
    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << "-" << i;
            sum -= i;
        } else {
            if (i > 1) cout << " + ";
            cout << i;
            sum += i;
        }
    }
    cout << " = " << sum << endl;
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Sum of series: " << Series(num) << endl;
    return 0;
}
