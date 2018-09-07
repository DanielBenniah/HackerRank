import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)throws Exception {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int a0 = 0; a0 < T; a0++){
        	String[] line = br.readLine().split(" ");
            int N = Integer.parseInt(line[0]);
            int K = Integer.parseInt(line[1]);
            String num = br.readLine();
            char[] S = num.toCharArray();
            int max = 0;
            for(int i=0;i<S.length-K+1;i++){
            	int sum = 1;
            	for(int j=0;j<K;j++){
            		// System.out.println("S[" + i + "]=" +S[j+i]);
            		sum*=(int)Character.getNumericValue(S[j+i]);
            	}
            	if(sum>max)
            		max = sum;
            }
            System.out.println(max);
        }
    }
}
