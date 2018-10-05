import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long t = in.nextLong();
        if(t>=1&&t<=100000){
        for(long a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            
               long f2=1,fibonacci=1;long sum=0;
    for(long i=1; i+f2 <= n;){
            fibonacci = i + f2;
            i = f2;
            f2 = fibonacci;
           
            if(fibonacci%2==0)
                sum=sum+fibonacci;
        }
    
            System.out.println(sum);
        }
        }}
}
