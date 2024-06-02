/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class CallByValueExample {
    // Method to demonstrate call-by-value with primitive data type
    public void modifyValue(int x) {
        x = 100; // Changes to x do not affect the original value
        System.out.println("Inside modifyValue method - x: " + x);
    }

    // Method to demonstrate call-by-value with object reference
    public void modifyObject(StringBuilder sb) {
        sb.append(" World!"); // Changes to sb affect the original object
        System.out.println("Inside modifyObject method - sb: " + sb);
    }

    public static void main(String[] args) {
        CallByValueExample example = new CallByValueExample();
        
        // Primitive data type demonstration
        int num = 50;
        System.out.println("Before modifyValue method call - num: " + num);
        example.modifyValue(num);
        System.out.println("After modifyValue method call - num: " + num);
        
        // Object reference demonstration
        StringBuilder strBuilder = new StringBuilder("Hello");
        System.out.println("Before modifyObject method call - sb: " + strBuilder);
        example.modifyObject(strBuilder);
        System.out.println("After modifyObject method call - sb: " + strBuilder);
    }
}
