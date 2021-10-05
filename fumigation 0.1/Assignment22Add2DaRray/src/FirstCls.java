import java.util.Scanner;

public class FirstCls {
	public static void main(String ar[]) {
		WorkCls obj=new WorkCls();
		
		Scanner sc =new Scanner (System.in);
		
		System.out.println("enter the limit");
		int limit = sc.nextInt();
		
		int [][]arr1 =new int[limit][limit];
		int [][]arr2 =new int[limit][limit];
		int [][]sum=new int [limit][limit];
		
		obj.getArray(arr1, arr2, limit);
		obj.addArray(arr1, arr2, sum, limit);
		obj.displayArray(arr1, arr2, sum, limit);
		
		
		
	}
}
