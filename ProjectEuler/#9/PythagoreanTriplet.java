import java.io.*;
public class PythagoreanTriplet{
	public static void main(String[] args)throws Exception{
		int n=1,m=0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while(n>m){
			n = Integer.parseInt(br.readLine());
			m = Integer.parseInt(br.readLine());
			int a = (n*n)-(m*m);
			System.out.println("a = "+ a);
			a = 2*n*m;
			System.out.println("b = "+a);
			a = (n*n)+(m*m);
			System.out.println("c ="+a);
		}
	}
}