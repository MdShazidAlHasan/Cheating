
package Shazid313;

public class TryCatchExample {
    public static void main(String[] args) {
        try {
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero");
        } finally {
            System.out.println("Program execution complete.");
        }
    }
    public static int divide(int numerator, int denominator) {
        return numerator / denominator;
    }
}
