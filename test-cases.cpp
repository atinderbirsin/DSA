#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Single Input
    int n;
    cin >> n;

    cout << n << endl;

    // Multiple Input
    string name;
    int age;

    cin >> name >> age;

    cout << name << endl
         << age << endl;

    // Input Validation
    // Range -> [-100, 100]
    string s = "16";
    // getline(cin, s); // Not Working locally so setting s manually
    cout << s << endl;
    int start = 0;

    bool valid = true;

    if (s.empty())
    {
        valid = false;
    }

    if (!s.empty() && s[0] == '-')
    {
        if (s.length() == 1)
        {
            valid = false;
        }
        start = 1;
    }

    for (int i = start; i < s.length(); i++)
    {
        if (!isdigit(s[i]))
        {
            valid = false;
            break;
        }
    }

    if (valid)
    {
        long long num = stoll(s);
        if (num >= -100 && num <= 100)
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }

    // Logical operation from user input && , ||
    int a, b;
    string op;
    cin >> a >> b >> op;

    if (op == "&&")
    {
        cout << (a && b) << endl;
    }
    else
    {
        cout << (a || b) << endl;
    }

    // Even / Odd between 2 numbers
    int num1;
    cin >> num1;

    if (num1 % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    // Maximum of two numbers
    int num2, num3;
    cin >> num2 >> num3;

    if (num2 > num3) {
        cout << num2 << endl;
    } else {
        cout << num3 << endl;
    }

    // Maximum of three numbers
    int num4 , num5 , num6;
    cin >> num4 >> num5 >> num6;

    if (num4 > num5) {
       if (num4 > num6) {
        cout << num4 << endl;
       } else {
        cout << num6 << endl;
       }
    } else if (num5 > num6) {
        cout << num5 << endl;
    } else {
        cout << num6 << endl;
    }

    // Switch Case
    int num7;
    cin >> num7;

    switch (num7) {
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << "Tuesday" << endl;
        break;
        case 3:
        cout << "Wednesday" << endl;
        break;
        case 4:
        cout << "Thursday" << endl;
        break;
        case 5:
        cout << "Friday" << endl;
        break;
        case 6:
        cout << "Saturday" << endl;
        break;
        case 7:
        cout << "Sunday" << endl;
        break;
        default:
        cout << "Invalid" << endl;
    }
    return 0;
}