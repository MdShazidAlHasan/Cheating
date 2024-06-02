/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;
public class InheritanceSuperKeyword {
    // Parent class (Superclass)
    public static class Animal {
        String species;

        public Animal(String species) {
            this.species = species;
        }

        public void displaySpecies() {
            System.out.println("Species: " + species);
        }
    }

    // Child class (Subclass) inheriting from Animal
    public static class Dog extends Animal {
        String breed;

        public Dog(String species, String breed) {
            super(species); // Call to superclass constructor using super keyword
            this.breed = breed;
        }

        public void displayBreed() {
            System.out.println("Breed: " + breed);
        }

        // Overriding superclass method
        @Override
        public void displaySpecies() {
            super.displaySpecies(); // Call to superclass method using super keyword
            System.out.println("This is a dog.");
        }
    }

    public static void main(String[] args) {
        // Creating an instance of Dog
        Dog myDog = new Dog("Canine", "Labrador");

        // Calling methods of the Dog class
        myDog.displaySpecies(); // Accessing overridden method
        myDog.displayBreed();
    }
}
