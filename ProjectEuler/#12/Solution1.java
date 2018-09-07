import java.io.*;
import java.util.*;

    public class Solution1 {
        public static long factornumber(long n){
        long count=0;
        for(long i=1;i<=n;i++)
            if(n%i == 0)
                count+=1;
        return count;
        }
    public static void main(String[] args) throws Exception {
        
        long[] arr = new long[1000];
        long[] factor = new long[1000];
        for(int i=1;i<=1000000;i++)
             arr[i]=(i+1)*i/2;
        for(int i=1;i<=1000000;i++)
            factor[i]=factornumber(arr[i]);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int ai = 0; ai<T ; ai++){
            int N = Integer.parseInt(br.readLine());
            int i=0;
            while(factor[i]<=N)
                i++;
            System.out.println(arr[i]);
        }
    }
}