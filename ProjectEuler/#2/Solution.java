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
            long N = Long.parseLong(br.readLine());
            long first = 1;
            long second = 1;
            long sum = 0, evensum = 0;
            while(second < N){
                sum = first + second;
                System.out.println("Sum = " +sum);
                System.out.println("Sum % 2 = " +(sum%2));
                first = second;
                second = sum;
                if( sum % 2 == 0 && sum<N ){
                    evensum+=sum;
                }
            }
            System.out.println(evensum);
        }
    }
}
