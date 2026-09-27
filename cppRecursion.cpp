#include<bits/stdc++.h>
using namespace std;

void recursiveFunction(int x) {
    if (x >= 4) return;

    cout << "My name is Raj " << x << endl;

    recursiveFunction(x + 1);
}

void tailRecursiveFunction(int x) {
    if (x >= 4) return;

    cout << "My name is Anuj " << x << endl;
    
    tailRecursiveFunction(x + 1);
}

void headRecursiveFunction(int x) {
    if (x >= 4) return;

    headRecursiveFunction(x + 1);

    cout << "My name is Vinay " << x << endl;
}



int main () {
    int count = 0;

    // Recursion 
    recursiveFunction(count);

    // Tail Recursion
    tailRecursiveFunction(count);

    // Head Recursion
    headRecursiveFunction(count);

    return 0;
}