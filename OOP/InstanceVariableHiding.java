/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class InstanceVariableHiding {
    // Parent class
    public static class Parent {
        int x = 10; // Instance variable x in Parent class

        void display() {
            System.out.println("Parent class - x: " + x);
        }
    }

    // Child class inheriting from Parent
    public static class Child extends Parent {
        int x = 20; // Instance variable x in Child class

        void display() {
            System.out.println("Child class - x: " + x);
        }
    }

    public static void main(String[] args) {
        Parent parentObj = new Parent();
        Child childObj = new Child();

        parentObj.display(); // Output: Parent class - x: 10
        childObj.display();  // Output: Child class - x: 20

        // Accessing Parent class's x using childObj
        System.out.println("Accessing Parent class's x using childObj: " + childObj.x); // Output: 20
    }
}
