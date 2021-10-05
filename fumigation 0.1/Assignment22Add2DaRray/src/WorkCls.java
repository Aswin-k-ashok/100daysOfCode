import java.util.Scanner;

public class WorkCls {
	 
	public void getArray(int[][]a, int[][]b,int size){
		
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the first array: ");
		for(int i=0;i<size;i++) {
			for(int j=0;j<size;j++) {
				
				a[i][j]=sc.nextInt();
			}
		}
		
		System.out.println("enter the second array: ");
		for(int i=0;i<size;i++) {
			for(int j=0;j<size;j++) {
				b[i][j]=sc.nextInt();
			}
		}
		
		
	}



public int[][] addArray(int[][] a, int[][] b,int [][]sum, int size){
	
		for(int i=0;i<size;i++) {
			for(int j=0;j<size;j++) {
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		return sum;
	}

public void displayArray(int[][]a, int [][]b,int [][]sum, int size){
	for(int i=0;i<size;i++) {
		for(int j=0;j<size;j++) {
			System.out.print(sum[i][j]+" ");
		}
		System.out.println("\n");
	}
	

}

}