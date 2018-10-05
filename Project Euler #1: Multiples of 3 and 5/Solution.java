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
            
            int a3=3,d3=3;long t3=0;
            int a5=5,d5=5;long t5=0;
            int a15=15,d15=15;long t15=0;
            long s3=0,s5=0,s15=0;

            
        
            if(n%3==0)
                t3=(n/3)-1;
            else
                t3=n/3;
            
            if(n%5==0)
                t5=(n/5)-1;
            else
                t5=n/5;

            if(n%15==0)
                t15=(n/15)-1;
            else
                t15=n/15;

            
             s3=(t3)*((2*a3)+((t3-1)*d3));
             s5=(t5)*((2*a5)+((t5-1)*d5)); 
             s15=(t15)*((2*a15)+((t15-1)*d15));

            System.out.println(""+(s3+s5-s15)*1/2);
        }
    }
}
