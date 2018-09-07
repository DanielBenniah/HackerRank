import java.io.*;
import java.util.*;

public class Solution1{
	public static void main(String[] args)throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int a,b,c;
        int n=1,m=0;
        for(int a0=0;a0<T;a0++){
        	int flag = 0;
        	int product = -1;
        	int N = Integer.parseInt(br.readLine());
        	if(N>=2){
	        	for(a = 1;a<1000;a++){
	        		if(((N*N-2*a*N))%(2*N-2*a)==0)
	        			b = (N/2)*(N-2*a)/(N-a);
	        		else continue;
	        		c = N-a-b;
	        		if(a+b+c == N){
	        			System.out.println("a = "+a);
	        			System.out.println("b = "+b);
	        			System.out.println("c = "+c);
	        			product = a*b*c;
	        			break;
	        		}
	        	}
       		}
        	if(product == 0)
        		System.out.println("-1");
        	else
        	System.out.println(product);
        }
	}
}