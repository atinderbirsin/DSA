#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
    
    public:
        void setDetails (string updatedName, int updatedRollNumber) {
            name = updatedName;
            rollNumber = updatedRollNumber;
        }

        void displayDetails () {
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << rollNumber << endl;
        }
};

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accountNumber, double initialBalance) {
            this->accountNumber = accountNumber;
            if (initialBalance >= 0) {
                balance = initialBalance;
            } else {
                balance = 0.00;
            }
        }

        void deposit(double amount) {
            if (amount <= 0) {
                cout << "Amount should be greater than 0.00" << endl;
                return;
            }
            balance += amount;
        }

        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient funds!" << endl;
                return;
            }
            balance -= amount;
        }

        void displayDetails() {
            cout << "Account Number : " << accountNumber << endl;
            cout << fixed << setprecision(2);
            cout << "Balance : " << balance << endl;
        }
};

class Rectangle {
    private:
        double length;
        double width;
        double area;
    
    public:
        Rectangle(double updatedLength , double updatedWidth) {
            length = updatedLength;
            width = updatedWidth;
        };

        Rectangle() {
            length = 1.0;
            width = 1.0;
        };

        void calculateArea() {
            area = length * width;
        };

        void displayDetails() {
            cout << "Length is : " << fixed << setprecision(2) << length << endl;
            cout << "Width is : " << fixed << setprecision(2) << width << endl;
            cout << "Area is : " << fixed << setprecision(2) << area << endl;
        }

};

int main () {
    Student s1;

    string name;
    int rollNumber;

    cin >> name >> rollNumber;

    s1.setDetails(name, rollNumber);
    s1.displayDetails();

    string accountNumber = "9662375274869";
    double balance = 8655;
    double addBalance = 5854;
    double withdrawBalance = 9437;

    // Create BankAccount object
    BankAccount account(accountNumber, balance);

    // Deposit and withdraw operations
    account.deposit(addBalance);
    account.withdraw(withdrawBalance);

    // Display final account details
    account.displayDetails();

    Rectangle react1(2, 4);
    Rectangle react2(4, 8);

    react1.calculateArea();
    react2.calculateArea();

    react1.displayDetails();
    react2.displayDetails();

    return 0;
}