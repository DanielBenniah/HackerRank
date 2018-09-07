import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	public static int check_row(int[][] a){
		int max = 0;
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				if(j<17){
					int product = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
					if(product>max)
						max = product;
				}
				if(i<17){
					int product = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
					if(product>max)
						max = product;
				}
				if(i<17 && j<17){
					int product = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
					if(product>max)
						max = product;
				}
				if(i>2 && j<17){
					int product = a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
					if(product>max)
						max = product;
				}
			}
		}
		return max;
	}

    public static void main(String[] args)throws Exception {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	int[][] grid = new int[20][20];
        for(int grid_i=0; grid_i < 20; grid_i++){
        	String[] line = br.readLine().split(" ");
            for(int grid_j=0; grid_j < 20; grid_j++){
                grid[grid_i][grid_j] = Integer.parseInt(line[grid_j]);
            }
        }
        System.out.println(check_row(grid));
    }
}
