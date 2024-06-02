/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Shazid313;

import java.util.Scanner;

public class PalindromeGenerator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        if (isPalindrome(input)) {
            System.out.println("The input string is already a palindrome.");
        } else {
            String palindrome = makePalindrome(input);
            System.out.println("Palindrome created: " + palindrome);
        }
        
        scanner.close();
    }
    
    public static boolean isPalindrome(String str) {
        str = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
    
    public static String makePalindrome(String str) {
        StringBuilder reversed = new StringBuilder(str);
        reversed.reverse();
        return str + reversed.toString();
    }
}
