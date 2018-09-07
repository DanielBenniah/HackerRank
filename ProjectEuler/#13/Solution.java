import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int[][] n = new int[T][50];
        for(int ai = 0 ; ai<T ; ai++){
            String line = br.readLine();
            char[] A = new char[50];
            A = line.toCharArray();
            for(int i=0;i<50;i++)
                n[ai][i]=Character.getNumericValue(A[i]);
        }
        int[] number = new int[13];
        int temp=0;
        for(int i=12;i>=0;i--){
            int sum = 0;
            sum += temp;
            for(int j=0;j<T;j++){
                sum += n[j][i];
            }
            temp = sum / 10;
            number[i] = sum %10; 
        }
        for(int i=0;i<10;i++)
            System.out.print(number[i]);
    }
}