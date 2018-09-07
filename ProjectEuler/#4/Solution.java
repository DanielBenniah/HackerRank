import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static int ispalindrome(int N){
        char[] s = new char[6];
        for(int i=0;i<6;i++){
            s[i] = (char)(N%10);
            N=N/10;
        }
        if(s[0] == s[5] && s[1] == s[4] && s[2]==s[3])
            return 1;
        return 0;
    }
        public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            int N = Integer.parseInt(br.readLine());
            int palindrome = 0;
            // if(ispalindrome(N)==1)
            //     System.out.println("Yes");
            // else
            //     System.out.println("No");
            for(int i=100;i<1000;i++){
                for(int j=316;j<1000;j++){
                    if( i*j < N && ispalindrome(i*j)==1 && palindrome<i*j)
                        palindrome = i*j;
                }
            }
            System.out.println(palindrome);
        }
    }
}
