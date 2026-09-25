import java.util.Scanner;

class javaBasics {
    public static void main(String[] args) {
        // The following line prints Hello java
        /*
         * This is a multiline comment
         */
        System.out.println("Hello Java");

        // -128 to 127
        // 8 bits
        byte num = 100;
        System.out.println(num);

        // -32,768 to 32,767
        // 16 bits
        short num1 = 100;
        System.out.println(num1);

        // -2^31 to 2^31 - 1
        // 32 bits
        int num3 = 100;
        System.out.println(num3);

        // -2^63 to 2^63 - 1
        // 64 bits
        long num4 = 1000;
        System.out.println(num4);

        // (6-7 decimals of percission)
        // 32 bits
        float num5 = 6.6f;
        System.out.println(num5);

        // (15 decimals places)
        // 64 bits
        double num6 = 5.878;
        System.out.println(num6);

        // char
        char ch = 'a';
        System.out.println(ch);

        // Boolean
        boolean isTrue = true;
        System.out.println(isTrue);

        // Airthmetic operation
        int num7 = 5;
        int num8 = 12;
        int num9 = num7 + num8;
        int num10 = num8 - num7;
        int num11 = num8 / num7;
        double num12 = 5;
        double num13 = 12;
        double num14 = num13 / num12;
        int num15 = num8 * num7;
        int num16 = num8 % num7;
        System.out.println(num9);
        System.out.println(num10);
        System.out.println(num11);
        System.out.println(num14);
        System.out.println(num15);
        System.out.println(num16);

        // Unary Operators
        // +, -, ++, --, !
        int num17 = 6;
        int num18 = -num17;
        int num19 = -6;
        int num20 = -num19;
        int num21 = +num19;
        System.out.println(num18);
        System.out.println(num20);
        System.out.println(num21);

        boolean fl1 = true;
        boolean fl2 = !fl1;
        boolean fl3 = !!fl1;
        System.out.println(fl2);
        System.out.println(fl3);

        // ++ -> ++num, num++
        int num22 = 6;
        int num23 = num22++; // POST Increment
        int num24 = 6;
        int num25 = ++num24; // PRE Increment
        System.out.println("num22: " + num22);
        System.out.println("num23: " + num23);
        System.out.println("num24: " + num24);
        System.out.println("num25: " + num25);

        // -- -> --num, num--
        int num26 = 6;
        int num27 = num26--; // POST Increment
        int num28 = 6;
        int num29 = --num28; // PRE Increment
        System.out.println("Num 26:" + num26);
        System.out.println("Num 27:" + num27);
        System.out.println("Num 28:" + num28);
        System.out.println("Num 29:" + num29);

        // Relation Operators
        // ==, !=, >, <, >=, <=
        int num30 = 6;
        int num31 = 7;
        boolean result = num30 == num31;
        boolean result2 = num30 != num31;
        boolean result3 = num30 > num31;
        boolean result4 = num30 < num31;
        boolean result5 = num30 >= num31;
        boolean result6 = num30 <= num31;
        System.out.println(result);
        System.out.println(result2);
        System.out.println(result3);
        System.out.println(result4);
        System.out.println(result5);
        System.out.println(result6);

        // Logical operators
        // &&, ||
        boolean first = true;
        boolean second = false;
        boolean result7 = first && second;
        boolean result8 = first || second;
        System.out.println(result7);
        System.out.println(result8);

        // Assignment operators
        // +=, /=, %=, *=, -=
        int num32 = 6;
        int num33 = 7;
        int result9 = 0;
        result9 += num32 + num33;
        int result10 = 0;
        result10 /= num32 + num33;
        int result11 = 0;
        result11 *= num32 + num33;
        int result12 = 5;
        result12 -= num32 + num33;
        System.out.println(result9);
        System.out.println(result10);
        System.out.println(result11);
        System.out.println(result12);

        // Ternary Operator
        int num34 = 6;
        int num35 = 9;
        int num36 = num34 > num35 ? num34 : num35;
        System.out.println(num36);

        // Strings
        // String are Immutable
        // If we overwrite a string , it creates a new string at new place old one is
        // discarded and variable name remains same
        String name = "Raj";
        System.out.println(name + " has length " + name.length());
        System.out.println(name.charAt(0));
        System.out.println(name.substring(0, 3));
        String firstName = "Raj";
        String lastName = "Vikram";
        firstName += " " + lastName;
        System.out.println(firstName);

        boolean result13 = firstName.equals(lastName);
        System.out.println(result13);

        // I/O
        Scanner scanner = new Scanner(System.in);
        int num37 = scanner.nextInt();
        double num38 = scanner.nextDouble();
        String str = scanner.nextLine();
        String str1 = scanner.next();
        String str2 = scanner.next();
        System.out.println(num37);
        System.out.println(num38);
        System.out.println(str);
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str1 + " " + str2);
        // scanner.close(); // Initially it should be closed but for studing , I have commented it out.
        // Eveytime we create a scanner object we need to closed it once input task is done.

        // Type Casting
        // Implicit / Explicit
        int w = 10;
        double x = w; // Implicit done automatically
        double y = 10.7;
        int z = (int) y; // Explicit done by ourself
        System.out.println(x);
        System.out.println(z);

        // Constant final keyword
        final int num39 = 10;
        // num39 = 100; // Error because final keyword defines it's constant
        System.out.println(num39);

        // Arrays
        int[] arr = new int[5];
        arr[0] = 1;
        arr[1] = 6;
        arr[2] = 7;
        arr[3] = 9;
        arr[4] = 1;
        System.out.println(arr[2]);
        System.out.println(arr.length);
        // System.out.println(arr[8]); // RUNTIME ERROR

        int[][] arr2 = { { 5, 6 }, { 6, 7, 9 }, { 7, 8 }, { 8, 9 } };
        int[] zeroIndex = arr2[0];
        System.out.println(zeroIndex[1]);
        System.out.println(arr2[1][2]);

        //IF - ELSE Statement
        int age = scanner.nextInt();
        if (age >= 18) {
            System.out.println("Adult");
        } else {
            System.out.println("Teen");
        }

        int marks = scanner.nextInt();
        if (marks >= 90) {
            System.out.println("A");
        } else if (marks >= 70) {
            System.out.println("B");
        } else if (marks >= 50) {
            System.out.println("C");
        } else if (marks >= 35) {
            System.out.println("D");
        } else {
            System.out.println("Fail");
        }

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if (a > b && a > c) {
            System.out.println("A is greatest");
        } else if (b > a && b > c) {
            System.out.println("B is greatest");
        } else if (c > b && c > a) {
            System.out.println("C is greatest");
        } else {
            System.out.println("No one is greatest");
        }

        if (a >= b) {
            if (a >= c) {
                System.out.println(a);
            } else {
                System.out.println(c);
            }
        } else if (b >= c) {
            System.out.println(b);
        } else {
            System.out.println(c);
        }

        // Switch case statement
        int dayNumber = scanner.nextInt();

        switch (dayNumber) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid");
                break;
        }
        
        // for loop
        int i;
        for (i = 2; i <= 50; i = i + 2) {
            System.out.println("Line number " +i);
        }
        
        int size = scanner.nextInt();
        int[] arr3 = new int[size];

        int sum = 0;

        for (i = 0; i < size; i++) {
            arr3[i] = scanner.nextInt();
        }

        for (i = 0; i < size; i++) {
            System.out.println(arr3[i]);
            sum += arr3[i];
        }

        for (int num40: arr3) {
            System.out.print(num40 + " ");
        }        
        
        System.out.println("\nSum of Elements is : " +sum);
        
        // While loop
        i = 2;
        while (i <= 50) {
            System.out.println(i);
            i = i + 1;
        }
        
        // Do While loop
        do {
            int num40 = scanner.nextInt();
            if (num40 == 10) {
                break;
            }
            System.out.println(num40);
        } while(true);
        
        scanner.close();

        // try/catch/finally
        try {
            int num41 = 10;
            int num42 = 0;
            int num43 = num41 / num42;
            System.out.println(num43);
        }
        catch (Exception ex) {
            System.out.println(ex);
        }
        finally {
            System.out.println("Done");
        }
    }
}