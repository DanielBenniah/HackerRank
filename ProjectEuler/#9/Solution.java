import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int a,b,c;
        int n=1,m=0;
        for(int a0=0;a0<T;a0++){
        	int flag = 0;
        	int N = Integer.parseInt(br.readLine());
        	for(n=1;n<=3000;n++){
        		for(m=0;m<n;m++){
		        	a = (n*n)-(m*m);
		        	b = 2*n*m;
		        	c = (n*n)+(m*m);
		        	if( a+b+c == N){
		        		System.out.println(a*b*c);
		        		flag = 1;
		        		break;
		        	}
		        	if(a+b+c>N)
		        		break;
		        }
		        if(flag == 1)
		        	break;
			}
			if(flag == 0)
			System.out.println("-1");	
        }
    }
}
