/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;
public class CallByReferenceExample {
    // Custom class representing a Person
    public static class Person {
        String name;

        public Person(String name) {
            this.name = name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getName() {
            return name;
        }

        @Override
        public String toString() {
            return "Person{" +
                    "name='" + name + '\'' +
                    '}';
        }
    }

    // Method to demonstrate simulating call-by-reference
    public void modifyPersonName(Person person, String newName) {
        person.setName(newName); // Modifies the name of the person object
        System.out.println("Inside modifyPersonName method - person: " + person);
    }

    public static void main(String[] args) {
        CallByReferenceExample example = new CallByReferenceExample();

        // Creating a Person object
        Person person = new Person("John");
        System.out.println("Before modifyPersonName method call - person: " + person);

        // Modifying the name of the Person object using method call
        example.modifyPersonName(person, "Alice");

        // Checking the modified Person object outside the method
        System.out.println("After modifyPersonName method call - person: " + person);
    }
}
