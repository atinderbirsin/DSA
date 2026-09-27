#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    // Pattern 1
    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 2
    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 3
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 4
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 5
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 6
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 7
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        };

        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        };

        cout << endl;
    };

    cout << endl;

    // Pattern 8
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        };

        for (int k = 1; k <= (n - i) * 2 + 1; k++)
        {
            cout << "*";
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 9
    //        *
    //       ***
    //      *****
    //     *******
    //    *********
    //    *********
    //     *******
    //      *****
    //       ***
    //        *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        };

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        };

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        };

        for (int k = 1; k <= (n - i) * 2 + 1; k++)
        {
            cout << "*";
        };

        cout << endl;
    };

    cout << endl;

    // Pattern 10
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i > n)
                break;
            cout << "*";
        };

        for (int k = i; k <= (n * 2) - 1; k++)
        {
            if (i <= n)
                break;
            cout << "*";
        };

        cout << endl;
    };

    cout << endl;

    // Pattern 11
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            };
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 12
    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        };

        for (int k = 1; k <= (n - i) * 2; k++)
        {
            cout << " ";
        };

        for (int l = i; l >= 1; l--)
        {
            cout << l;
        };

        cout << endl;
    };

    cout << endl;

    // Pattern 13
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 14
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << alphabets[j];
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 15
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << alphabets[j];
        };
        cout << endl;
    };

    cout << endl;

    // Pattern 16
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        };
        cout << endl;
        ch = ch + 1;
    };

    cout << endl;

    return 0;
}