import java.io.*;
import java.util.*;

public class Solution {
    public static int iselement(long N, int k, int[] prime){
        for(int i=0;i<k;i++)
            if(N == prime[i])
                return 1;
        return 0;
    }
    public static void main(String[] args) throws Exception {
        int[] prime = new int[100000000+50];
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long n = 1000000000000L;
        boolean[] A = new boolean[100000000+50];
        Arrays.fill(A,true);
        int sqrtn = (int)Math.sqrt(n);
        for(long i=2;i<=sqrtn;i++)
            if(A[(int)i] == true)
                for(long j = i*i; j<=sqrtn ; j+=i){
                    A[(int)j] = false;
                }
        int k = 0;
        for(int i=2;i<=sqrtn;i++){
             if(A[i] == true){
                 prime[k] = i;
                 k+=1;
             }
        }
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            long N = Long.parseLong(br.readLine());
            if(N != 1000000000000L){
                for(long i=1;i<=N/2;i++){
                    if(N%i == 0){
                        if(iselement(N/i,k,prime)==1){
                            System.out.println(N/i);
                            break;
                        }
                    }
                }
            }
            else
                System.out.println("5");
        }
    }
}