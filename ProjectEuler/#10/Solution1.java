import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution1 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        // int k = 1;
        int[] stackofprime = new int[1000000];
        int n = 1000000;
        boolean[] A = new boolean[n+1];
        Arrays.fill(A,true);
        int sqrtn = (int)Math.sqrt(n);
        // stackofprime[0] = 2;
        // for(int i=3;i<10000;i+=3){
        //     for(int j = k-1;j>=0;j--){
        //     		if(i%stackofprime[j]==0)
        //     			break;
        //     }
        //     if(j==-1){
        //     	stackofprime[k] = i;
        //     	k+=1;
        //     }
        // }
        for(int i=2;i<=sqrtn;i++)
            if(A[i] == true)
                for(int j = i*i; j<=n ; j+=i)
                    A[j] = false;
        int k = 0;
        for(int i=2;i<=n;i++){
            if(A[i] == true){
                stackofprime[k] = i;
                k+=1;
            }
        }
        for(int a0 = 0; a0 < T; a0++){
            long sum = 0;
            int N = Integer.parseInt(br.readLine());
            for(int i=0;stackofprime[i]<N;i++){
                // System.out.println("Stack of prime ["+i+"] = " +stackofprime[i]);
                sum += stackofprime[i];
            }
            System.out.println(sum);
        }
    }
}
