/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

public class InheritanceExample {
    // Superclass (Parent class)
    public static class Vehicle {
        String brand;
        int year;

        public Vehicle(String brand, int year) {
            this.brand = brand;
            this.year = year;
        }

        public void displayDetails() {
            System.out.println("Brand: " + brand + ", Year: " + year);
        }
    }

    // Subclass (Child class) inheriting from Vehicle
    public static class Car extends Vehicle {
        int numOfDoors;

        public Car(String brand, int year, int numOfDoors) {
            super(brand, year); // Call to superclass constructor
            this.numOfDoors = numOfDoors;
        }

        public void displayCarDetails() {
            displayDetails(); // Call to superclass method
            System.out.println("Number of doors: " + numOfDoors);
        }
    }

    public static void main(String[] args) {
        // Creating an instance of Car
        Car myCar = new Car("Toyota", 2020, 4);

        // Displaying details of the Car using subclass method
        myCar.displayCarDetails();
    }
}
