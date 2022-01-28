package Java;

import java.util.Scanner;

/**  
* Java program to demonstrate How to find Greatest Common Divisor or GCD of   
* two numbers using Euclid’s method. There are other methods as well to   
* find GCD of two number in Java but this example of finding GCD of two number  
* is most simple.    
*/
public class Euclide {        
    public static void main(String args[]){               
    
        //Enter two number whose GCD needs to be calculated.      
        Scanner scanner = new Scanner(System.in);         
        System.out.println("Please enter first number to find GCD");         
        int number1 = scanner.nextInt();         
        System.out.println("Please enter second number to find GCD");         
        int number2 = scanner.nextInt();                
        
        System.out.println("GCD of two numbers " + number1 +" and "+ 
                        number2 +" is :" + findGCD(number1,number2));                   
}      

/*      
* Java method to find GCD of two number using Euclid's method      
* And return GDC of two numbers in Java      
*/
private static int findGCD(int number1, int number2) {         
    //base case
    if(number2 == 0){             
        return number1;         
    }         
    return findGCD(number2, number1%number2);     
  }    
} 

// Using this version of the method, we get the following result : 
// --------------------       ----- -----
// Before 1st iteration        420   96
// After 1th iteration          36   96
// After 2nd iteration          36   24
// After 3rd iteration          12   24
// After 4th iteration          12    0

// int gcd(int K, int M) {
//     int k = Math.max(K,M);
//     int m = Math.min(K,M);
//     // loop invariant: k ≥ m ∧ GCD(K,M) = GCD(k,m)
//     while (m != 0) {
//        int r = k % m;
//        k = m;
//        m = r;
//     }
//     // At this point, GCD(K,M) = GCD(k,m) = GCD(k,0) = k
//     return k;
//  }