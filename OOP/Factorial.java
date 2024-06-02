/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class Factorial {
    public static void main(String[] args) {
        int number = 5; // Change this to any non-negative integer for testing
        
        long factorial = calculateFactorial(number);
        
        System.out.println("Factorial of " + number + " is: " + factorial);
    }
    
    public static long calculateFactorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * calculateFactorial(n - 1);
        }
    }
}
