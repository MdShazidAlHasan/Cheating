/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class MethodOverridingExample {
    // Parent class (Superclass)
    public static class Animal {
        public void sound() {
            System.out.println("Animal makes a sound.");
        }
    }

    // Child class (Subclass) inheriting from Animal
    public static class Dog extends Animal {
        // Overriding the sound method of the Animal class
        @Override
        public void sound() {
            System.out.println("Dog barks.");
        }
    }

    public static void main(String[] args) {
        // Creating instances of Animal and Dog
        Animal animal = new Animal();
        Dog dog = new Dog();

        // Calling sound method on instances
        animal.sound(); // Output: Animal makes a sound.
        dog.sound();    // Output: Dog barks.
    }
}
