/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class StaticKeywordExample {
    // Static variable
    static int count = 0;

    // Static method
    public static void incrementCount() {
        count++;
    }

    public static void main(String[] args) {
        // Accessing static variable and method using class name
        System.out.println("Initial count: " + StaticKeywordExample.count);

        StaticKeywordExample.incrementCount();
        StaticKeywordExample.incrementCount();

        System.out.println("Count after increment: " + StaticKeywordExample.count);
    }
}
