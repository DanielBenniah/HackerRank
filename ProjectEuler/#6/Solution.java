import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            int N = Integer.parseInt(br.readLine());
            BigInteger n = BigInteger.valueOf(N);
            n = BigInteger.valueOf(N);
            BigInteger sum,sum1,sum2,sum3,sum4;
            // BigInteger sum1;
            // BigInteger sum2;
            // BigInteger sum3;
            // BigInteger sum4;
            sum1 = n.multiply(n).multiply(n).multiply(n).multiply(BigInteger.valueOf(3));
            // sum1 = sum1.multiply(n);
            // sum1 = sum1.multiply(n);
            // sum1 = sum1.multiply(BigInteger.valueOf(3));
            sum2 = n.multiply(n).multiply(n).multiply(BigInteger.valueOf(2));
            // sum2 = sum2.multiply(n);
            // sum2 = sum2.multiply(BigInteger.valueOf(2));
            sum3 = n.multiply(n).multiply(BigInteger.valueOf(3));
            // sum3 = sum3.multiply(BigInteger.valueOf(3));
            sum4 = n.multiply(BigInteger.valueOf(2));
            // sum = BigInteger.valueOf(0);
            sum = sum1.add(sum2).subtract(sum3).subtract(sum4).divide(BigInteger.valueOf(12));
            // sum = sum.add(sum2);
            // sum = sum.subtract(sum3);
            // sum = sum.subtract(sum4);
            // sum = sum.divide(BigInteger.valueOf(12));
            // sum = ((3*N*N*N*N)+(2*N*N*N)-(3*N*N)-(2*N))/12;
            System.out.println(sum);
        }
    }
}
