public class javaRecursion {
    public static void main(String[] args) {
        int count = 0;    
        
        // Recursion
        recursiveFunction(count);

        // Tail Recursion
        tailRecursiveFunction(count);

        // Head Recursion
        headRecursiveFunction(count);
    }
    
    // Recursive function
    static void recursiveFunction (int x) {
        if (x >= 4) return;

        recursiveFunction(x + 1);
        
        System.out.println("I am Anuj " +x);
    }

    // Tail Recursive function
    static void tailRecursiveFunction(int x) {
        if (x >= 4) return;

        System.out.println("I am Abhinav " +x);

        tailRecursiveFunction(x + 1);
    }

    // Head Recursive function
    static void headRecursiveFunction(int x) {
        if (x >= 4) return;

        headRecursiveFunction(x + 1);

        System.out.println("I am Amit " +x);
    }
}
