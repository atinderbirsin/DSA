public class javaPatterns {
    public static void main (String[] args) {
        int n = 5;
        
        // Pattern 1
        // *****
        // *****
        // *****
        // *****
        // *****
        for (int i = 1;i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print("*");
            };
            System.out.print("\n");
        }

        System.out.println();

        // Pattern 2
        // *
        // **
        // ***
        // ****
        // *****
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            };
            System.out.print("\n");
        }

        System.out.println();

        // Pattern 3
        // 1
        // 12
        // 123
        // 1234
        // 12345
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            };
            System.out.print("\n");
        };

        System.out.println();

        // Pattern 4
        // 1
        // 22
        // 333
        // 4444
        // 55555
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i);
            };
            System.out.println();
        };

        System.out.println();

        // Pattern 5
        // *****
        // ****
        // ***
        // **
        // *
        for (int i = 1;i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("*");
            };
            System.out.println();
        };

        System.out.println();

        // Pattern 6
        // 12345
        // 1234
        // 123
        // 12
        // 1
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print(j);
            };
            System.out.println();
        };

        System.out.println();

        // Pattern 7
        //     *
        //    ***
        //   *****
        //  *******
        // *********
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            };

            for (int k = 1; k <= (i * 2) - 1; k++) {
                System.out.print("*");
            };

            System.out.print("\n");
        }

        System.out.print("\n");

        // Pattern 8
        // *********
        //  *******
        //   *****
        //    ***
        //     *
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                System.out.print(" ");
            };

            for (int k = 1; k <= (n - i) * 2 + 1; k++) {
                System.out.print("*");
            };

            System.out.print("\n");
        };

        System.out.print("\n");

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
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            };

            for (int k = 1; k <= (i * 2) - 1; k++) {
                System.out.print("*");
            };

            System.out.print("\n");
        };

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                System.out.print(" ");
            };

            for (int k = 1; k <= (n - i) * 2 + 1; k++) {
                System.out.print("*");
            };

            System.out.print("\n");
        };

        System.out.print("\n");

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
        for (int i = 1; i <= n * 2 - 1; i++) {
            for (int j = 1; j <= i; j++) {
                if (i > n) break;
                System.out.print("*");
            };

            for (int k = i; k <= n * 2 - 1; k++) {
                if (i <= n) break;
                System.out.print("*");
            };

            System.out.print("\n");
        };

        System.out.println();

        // Pattern 11
        // 1 
        // 0 1 
        // 1 0 1 
        // 0 1 0 1 
        // 1 0 1 0 1
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    System.out.print(1);
                } else {
                    System.out.print(0);
                };
            };
            System.out.print("\n");
        };

        System.out.print("\n");

        // Pattern 12
        // 1        1
        // 12      21
        // 123    321
        // 1234  4321
        // 1234554321
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            };

            for (int k = 1; k <= (n - i) * 2; k++) {
                System.out.print(" ");
            };

            for (int l = i; l >= 1; l--) {
                System.out.print(l);
            };

            System.out.println();
        }

        System.out.println();

        // Pattern 13
        // 1 
        // 2 3 
        // 4 5 6
        // 7 8 9 10 
        // 11 12 13 14 15
        int start = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(start+ " ");
                start++;
            };
            System.out.println();
        };
       
        System.out.println();

        // Pattern 14
        // A
        // AB
        // ABC
        // ABCD
        // ABCDE
        String alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(alphabets.charAt(j));
            };
            System.out.println();
        };

        System.out.println();

        // Pattern 15
        // ABCDE
        // ABCD
        // ABC
        // AB
        // A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print(alphabets.charAt(j));
            };
            System.out.println();
        };

        System.out.println();

        // Pattern 16
        // A
        // BB
        // CCC
        // DDDD
        // EEEEE
        char startAlpha = 'A';
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(startAlpha);
            };
            startAlpha = (char)(startAlpha + 1);
            System.out.println();
        };

        System.out.println();
    }
}
