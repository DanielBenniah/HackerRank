import java.io.*;
import java.util.*;

    public class Solution {
        public static long factornumber(long n,long[] prime,long k){
            long i=0;
            long product = 1;
            // while(n/prime[(int)i]!=0 && i<k){
            //     if(n/prime[(int)i]==0)
            //     product = product * ((n/prime[(int)i])+1);
            //     i++;
            // }
            return product;
    }
    public static void main(String[] args) throws Exception {
        long[] arr = new long[10000001];
        long[] prime = new long[10000001];
        long n = 100000;
        boolean[] A = new boolean[100000+1];
        Arrays.fill(A,true);
        long sqrtn = (long)Math.sqrt(n);
        for(long i=2;i<=sqrtn;i++)
            if(A[(int)i] == true)
                for(long j = i*i; j<=n ; j+=i)
                    A[(int)j] = false;
        long k = 0;
        for(long i=2;i<=n;i++){
            if(A[(int)i] == true){
                prime[(int)k] = i;
                k+=1;
            }
        }
        // System.out.println("Prime Numbers");
        // for(long i=0;i<k;i++){
        //     System.out.println(prime[(int)i]);
        // }
        System.out.println("First prime number = " +prime[0]);
        long[] factor = new long[10000001];
        for(long i=1;i<=10000000;i++)
             arr[(int)i]=(i+1)*i/2;
        for(long i=1;i<=10000000;i++)
            factor[(int)i]=factornumber(arr[(int)i],prime,k);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long T = Integer.parseInt(br.readLine());
        for(long ai = 0; ai<T ; ai++){
            long N = Integer.parseInt(br.readLine());
            long i=0;
            while(factor[(int)i]<=N)
                i++;
            System.out.println(arr[(int)i]);
        }
    }
}