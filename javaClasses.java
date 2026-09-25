import java.util.Scanner;

class Student {
    String name;
    int rollNumber;

    void setDetails (String updatedName, int updatedRollNumber) {
        this.name = updatedName;
        this.rollNumber = updatedRollNumber;
    }

    void displayDetails () {
        System.out.println("Name : " +name);
        System.out.println("Roll Number : " +rollNumber);
    }
};

class BankAccount {
    private String accountNumber;
    private double balance;

    BankAccount(String accountNumber, double initialBalance) {
        this.accountNumber = accountNumber;
        if (initialBalance >= 0) {
            this.balance = initialBalance;
        }   else {
            this.balance = 0.00;
        } 
    }

    public void deposit (double amount) {
        if (amount <= 0) {
            System.out.println("Amount should be greater than 0.00");
            return;
        }
        balance += amount;
    }

    public void withdraw (double amount) {
        if (amount > balance) {
            System.out.println("Insifficient funds!");
            return;
        }
        balance -= amount;
    }

    public void displayDetails() {
        System.out.println("Account Number : " +accountNumber);
        System.out.println("Balance : " +balance);
    }
}


class javaClasses {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String name = scanner.nextLine();
        int rollNumber = scanner.nextInt();
        
        scanner.close();

        Student s1 = new Student();

        s1.setDetails(name, rollNumber);

        s1.displayDetails();

        String accountNumber = "9662375274869";
        double balance = 8655;
        double addBalance = 5854;
        double withdrawBalance = 9437;

        // Create BankAccount object
        BankAccount account = new BankAccount(accountNumber, balance);

        // Deposit and withdraw operations
        account.deposit(addBalance);
        account.withdraw(withdrawBalance);

        // Display final account details
        account.displayDetails();
    }
}