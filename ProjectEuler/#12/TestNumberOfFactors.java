import java.util.*;
import java.io.*;
public class TestNumberOfFactors{
	public static int factornumber(int n){
        int count=0;
        for(int i=1;i<=n;i++)
            if(n%i == 0)
                count+=1;
        return count;
    }
    public static void main(String[] args)throws Exception{
    	int i;
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	while(true){
    		int n = Integer.parseInt(br.readLine());
    		System.out.println("Number of Factors = "+factornumber(n));
    	}
    }
}