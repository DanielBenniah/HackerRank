import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int a0 = 0; a0 < n; a0++){
            int grade = Integer.parseInt(br.readLine());
            if(grade<38){
                System.out.println(grade);
                continue;
            }else{
                for(int i=grade;i<=100;i++){
                    if(i%5 == 0){
                        if(i - grade < 3){
                            System.out.println(i);
                            break;
                        }
                        else{
                            System.out.println(grade);
                            break;
                        }
                            
                    }
                }
            }
            // your code goes here
        }
    }
}
