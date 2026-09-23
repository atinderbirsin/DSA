#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "I am a print function" << endl;
}

void inputTwoNumbersAndPrintAddOfThem()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Sum of 2 numbers is " << num1 + num2 << endl;
}

int sumOfTwoNumbers(int a, int b)
{
    return a + b;
}

void explainPassByValue(int x)
{
    x = x + 10;
}

void explainPassByReference(int &x)
{
    x = x + 10;
}

void explainPassByReferenceArray(int x[])
{
    x[0] = 100;
}

int main()
{
    // range -> [-10^9, 10^9]
    int numInt = INT_MAX;
    cout << numInt << endl;

    // range -> [-10^12, 10^12]
    long numLong = LONG_MIN;
    cout << numLong << endl;

    // range -> [-10^18, 10^18]
    long long numLongLong = 1000000000000000000;
    cout << numLongLong << endl;

    // range -> [till .7 decimels]
    float numFloat = 1.234567;
    cout << setprecision(7) << numFloat << endl;

    // range -> [till .15 decimels]
    double numDouble = 7.66382764873687;
    cout << setprecision(15) << numDouble << endl;

    // range -> [any of the 256 characters in single quote]
    char ch = 'a';
    cout << ch << endl;

    // range -> [any string in double quotes]
    string str = "TUF+";
    cout << str << endl;

    // I/O

    // range -> [if no input is given , it takes up garbage value]
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 << endl
         << num2 << endl;

    double num3;
    cin >> num3;
    cout << num3 << endl;

    string str1, str2;
    cin >> str1;
    cout << str1 << endl;

    getline(cin, str2);
    cout << str2 << endl;

    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult" << endl;
    }
    else if (age < 18 && age >= 10)
    {
        cout << "Teen" << endl;
    }
    else
    {
        cout << "Child" << endl;
    }

    int marks;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A" << endl;
    }
    else if (marks >= 70)
    {
        cout << "B" << endl;
    }
    else if (marks >= 50)
    {
        cout << "C" << endl;
    }
    else if (marks >= 35)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    int num4, num5, num6;
    cin >> num4 >> num5 >> num6;

    if (num4 >= num5)
    {
        if (num4 >= num6)
        {
            cout << "Largest is num4" << endl;
        }
        else
        {
            cout << "Largest is num6" << endl;
        }
    }
    else if (num5 >= num6)
    {
        cout << "Largest is num5" << endl;
    }
    else
    {
        cout << "Largest is num6" << endl;
    }

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Wrong Input Error";
        break;
    }

    int num7;

    for (int i = 1; i <= 2; i++)
    {
        cin >> num7;
        cout << num7 << endl;
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    int num8 = 5;

    while (num8 <= 50)
    {
        cout << num8 << endl;
        num8 = num8 + 5;
    }

    int num9 = 5;

    do
    {
        cout << num9 << endl;
        num9 = num9 + 5;
    } while (num9 <= 25);

    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        cout << num[i] << endl;
    }

    string str3 = "tufplus";
    int length = str3.size();

    for (int i = 0; i < length; i++)
    {
        cout << str3[i] << endl;
    }

    cout << "Before print function" << endl;
    print();
    cout << "After print function" << endl;

    inputTwoNumbersAndPrintAddOfThem();
    inputTwoNumbersAndPrintAddOfThem();

    cout << sumOfTwoNumbers(4, 5) << endl;

    int num11 = 5;
    // Explain -> This is pass by value
    explainPassByValue(num11);
    cout << num11 << endl;

    // Explain -> This is pass by reference
    explainPassByReference(num11);
    cout << num11 << endl;

    int arr[] = {1,2,4,6,3,6};
    // Explain -> Array Always takes pass by reference
    explainPassByReferenceArray(arr);
    cout << arr[0] << endl;

    return 0;
}