import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            long N = Long.parseLong(br.readLine());
            long sum=0;
            long n;
            n=N-1;
            while(n%3!=0)
                n--;
            long last = n,first = 3;
            long numberofterms = (last-first)/3;
            numberofterms+=1;
            // System.out.println("Number of 3 terms = " +numberofterms);
            sum += ((6+(numberofterms-1)*3)*numberofterms)/2;
            // System.out.println("Sum of 3 terms = " +sum);
            n=N-1;
            while(n%5!=0)
                n--;
            last = n;
            first = 5;
            long sum1;
            numberofterms = (last-first)/5;
            numberofterms+=1;
            // System.out.println("Number of 5 terms = " +numberofterms);
            sum1 = ((10+(numberofterms-1)*5)*numberofterms)/2;
            // System.out.println("Sum of 5 terms = " +sum1);
            sum+=sum1;
            n=N-1;
            while(n%15 != 0)
                n--;
            last = n;
            first = 15;
            numberofterms = (last-first)/15;
            numberofterms+=1;
            // System.out.println("Number of 15 terms = " +numberofterms);
            sum1 = ((30+(numberofterms-1)*15)*numberofterms)/2;
            // System.out.println("Sum of 15 terms = " +sum1);
            sum-=sum1;
            System.out.println(sum);
        }  
    }
}