import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int ai=0;ai<T;ai++){
            int N = Integer.parseInt(br.readLine());
            long sum=1;
            for(int i=2;i<=N;i++){
                if(sum%i!=0){
                    for(int j=2;j<=i;j++)
                        if((sum*j)%i==0){
                            sum*=j;
                            break;
                        }
                }
            }
            System.out.println(sum);
        }
    }
}
