import java.util.Scanner;

class Fibonacci {
    int fib (int x) {
        if (x == 0 || x == 1) return x;
        return fib(x - 1) + fib(x -2);
    }
}

public class javaExercise {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Switch Case Statement
        String status = scanner.nextLine();

        switch (status) {
            case "OK":
                System.out.println("Success");
                break;
            case "ERROR":
                System.out.println("Failure");
                break;
            case "PENDING":
                System.out.println("Waiting");
                break;
            default:
                System.out.println("Unknown");
        }
        
        // Sum of digits of a number
        int num = scanner.nextInt();
        int sum = 0;

        while (num > 0) {
            int lastDigit = num % 10;
            num = (int) num / 10;
            sum += lastDigit;
        }

        System.out.println("Sum is : " +sum);
                    
        // Reverse a Number
        int x = scanner.nextInt();
        int revNum = 0;

        while (x > 0) {
            int lastDigit = x % 10;
            x = (int) x / 10;
            revNum = revNum * 10 + lastDigit;
        }

        System.out.println("Reverse of Number :" +revNum);

        // Fibonacci Number 
        // fibonacci-> f(n) = f(n-1) + f(n-2)
        // f(0) = 0; f(1) = 1;

        int y = scanner.nextInt();
        Fibonacci calculate = new Fibonacci();

        int result = calculate.fib(y);

        System.out.println("Result of Fibonacci : " +result);

        // Multiplication table 

        int tableNumber = scanner.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.println(tableNumber+ " * " +i*tableNumber);
        }

        scanner.close();
    }    
}
