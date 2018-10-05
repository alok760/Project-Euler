import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            
            System.out.println(maxPrimeFactors(n)); 
        }
    }
    
      static long maxPrimeFactors(long n) 
    { 
        // Initialize the maximum prime 
        // factor variable with the 
        // lowest one 
        long maxPrime = -1; 
  
        // Print the number of 2s 
        // that divide n 
        while (n % 2 == 0) { 
            maxPrime = 2; 
  
            // equivalent to n /= 2 
            n >>= 1; 
        } 
  
        // n must be odd at this point, 
        // thus skip the even numbers 
        // and iterate only for odd 
        // integers 
        for (int i = 3; i <= Math.sqrt(n); i += 2) { 
            while (n % i == 0) { 
                maxPrime = i; 
                n = n / i; 
            } 
        } 
  
        // This condition is to handle 
        // the case when n is a prime 
        // number greater than 2 
        if (n > 2) 
            maxPrime = n; 
  
        return maxPrime; 
    } 
}
