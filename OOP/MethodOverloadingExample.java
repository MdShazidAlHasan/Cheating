/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class MethodOverloadingExample {
    // Method with no parameters
    public void display() {
        System.out.println("Method without parameters");
    }

    // Method with one parameter of type int
    public void display(int num) {
        System.out.println("Method with int parameter: " + num);
    }

    // Method with two parameters of different types
    public void display(String str, int num) {
        System.out.println("Method with String and int parameters: " + str + ", " + num);
    }

    // Method with two parameters of the same type but different order
    public void display(int num, String str) {
        System.out.println("Method with int and String parameters: " + num + ", " + str);
    }

    public static void main(String[] args) {
        MethodOverloadingExample example = new MethodOverloadingExample();

        // Method calls demonstrating method overloading
        example.display();
        example.display(10);
        example.display("Hello", 5);
        example.display(7, "World");
    }
}
