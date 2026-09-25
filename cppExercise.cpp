#include <bits/stdc++.h>
using namespace std;

int fibonacci (int x) {
    if (x == 0 || x == 1) return x;
    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    // Switch case 
    // Switch case doesn't compare string that's why if/else is used
    string status;
    cin >> status;

    if (status == "OK") {
        cout << "Success" << endl;
    } else if (status == "ERROR") {
        cout << "Failure" << endl;
    } else if (status == "PENDING") {
        cout << "Waiting" << endl;
    } else {
        cout << "Unknown" << endl;
    }

    // Sum of digits of a number
    int num;
    cin >> num;

    int sum = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        num = num / 10;
        sum += lastDigit;
    }

    cout << "Sum is : " << sum << endl;

    // Reverse a number
    int x;
    int revNum = 0;
    cin >> x;

    while (x > 0) {
        int lastDigit = x % 10;
        x = x / 10;
        revNum = revNum * 10 + lastDigit;
    }

    cout << "Reverse of Number : " << revNum << endl;

    // Fibonacci Number 
    // fibonacci-> f(n) = f(n-1) + f(n-2)
    // f(0) = 0; f(1) = 1;

    int fib;
    cin >> fib;

    int result = fibonacci(fib);

    cout << "Fibonacci of " << fib << " is : " << result << endl;

    // Multiplication table of given number
    int tableNumber;
    cin >> tableNumber;

    for (int i = 1; i <= 10; i++) {
        cout << tableNumber << " * " << i*tableNumber << endl;
    }

    return 0;
}