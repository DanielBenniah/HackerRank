import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class WeightedUniformStrings {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        char[] A = new char[s.length()];
        int[] n = new int[27];
        int longest = 0;
        Arrays.fill(n,0);
        A = s.toCharArray();
        // for(int i=0;i<s.length();i++){
        //     if(n[((int)A[i]-96)][0] == 0 || A[i] == A[i-1] )
        //         n[((int)A[i]-96)]+=1;
        // }
        for(int j=1;j<=26;j++){
            int max = 0;
            longest = 0;
            // System.out.println("Char checked is " + (char)(j+96));
            for(int i=0;i<s.length();i++){
                if(A[i]==(char)(j+96))
                    longest+=1;
                if(i==s.length()-1 || A[i]!=(char)(j+96))
                if(longest>max)
                    max = longest;
                else
                    longest = 0;
            }
            n[j] = max;
            // System.out.println("Value of n[j] is " + n[j]);
        }
        int index = 1;
        int[] array = new int[s.length()+1];
        int sum = 0;
        for(int i=1;i<=26;i++)
            sum+=n[i];
        // System.out.println("Size of index is " + array.length);
        for(int i=1;i<=26;i++){
            for(int j=1; j <= n[i] ; j++){
                array[index] = i*j;
                index++;
            }
        }
        // for(int i=1;i<27;i++){
        //     System.out.println(n[i]);
        // }
        // for(int i=1;i<index;i++){
        //     System.out.println(array[i]);
        // }
        int k = Integer.parseInt(br.readLine());
        for(int a0 = 0; a0 < k; a0++){
            int flag = 0;
            int x = Integer.parseInt(br.readLine());
            for(int i=1;i<=sum;i++){
                if(array[i] == x){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}
