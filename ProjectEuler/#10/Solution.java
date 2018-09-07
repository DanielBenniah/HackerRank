import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 public class Solution {
       public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] stackofprime_old = new int[1000000];
    	int k=1;
    	int i=0,j;
	    stackofprime_old[0] = 2;
        for(i=3;i<1000000;i+=2){
            System.out.println("i = " + i);
        		for(j=0;j<k;j++){
        			if( i%stackofprime_old[j]==0)
        				break;
        		}
        		if(j == k){
        			k+=1;
        			stackofprime_old[k-1] = i;
        		}
        	}
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            long sum = 0;
        	int N = Integer.parseInt(br.readLine());
            for(i=0;stackofprime_old[i]<N;i++)
                sum+=stackofprime_old[i];
        	System.out.println(sum);
        }
    }
}
