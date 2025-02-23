#include <iostream>
using namespace std;

int main() {
    int n, num;
    cout << "Enter the number of integers: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
     
    }
    
    int maxNum, minNum, sum = 0;
    cout << "Enter " << n << " integers: ";
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0) {
            maxNum = minNum = num;
        }
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
        sum += num;
    }
    
    double average = (sum) / n;
    
    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}

