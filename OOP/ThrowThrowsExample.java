/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

import java.io.IOException;

public class ThrowThrowsExample {
    public static void checkAge(int age) {
        if (age < 18) {
            throw new ArithmeticException("Age must be 18 or above.");
        } else {
            System.out.println("Age is valid.");
        }
    }
    
    public static void readFile(String file) throws IOException {
//        if(file.equals("null"))throw new IOException("not allowed");
        System.out.println("Reading file...");
    }

    public static void main(String[] args) {
        try {
            checkAge(15);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
        try {
            readFile("null");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
