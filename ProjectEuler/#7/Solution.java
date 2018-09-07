import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 public class Solution {
       public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] stackofprime_old = new int[10000];
    	int k=1;
    	int i=0,j;
	    stackofprime_old[0] = 2;
        for(i=3;k<10000;i+=2){
        		for(j=k-1;j>=0;j--){
        			if( i%stackofprime_old[j]==0)
        				break;
        		}
        		if(j == -1){
        			k+=1;
        			// System.out.println("k = " +k);
        			// for(int n=0;n<k-1;n++)
        			// 	stackofprime_new[n] = stackofprime_old[n];
        			// System.out.println("Size of stackofprime_old = "+stackofprime_old.length);
        			// System.out.println("Size of stackofprime_new = "+stackofprime_new.length);
        			// stackofprime_old = new int[k];
        			// for(int n=0;n<k-1;n++)
        			// 	stackofprime_old[n] = stackofprime_new[n];
        			// stackofprime_new = new int[k];
        			stackofprime_old[k-1] = i;
        			// System.out.println("Size of new stackofprime_old = "+stackofprime_old.length);
        			// System.out.println("Size of new stackofprime_new = "+stackofprime_new.length);
        		}
        	}
        // int[] stackofprime_new = new int[1];
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
        	int N = Integer.parseInt(br.readLine());
        	System.out.println(stackofprime_old[N-1]);
        }
    }
}
