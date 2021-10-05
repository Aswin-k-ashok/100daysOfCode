import java.util.Scanner;

public class First {
	
	public static void main(String ar[]) {
		
		Scanner sc=new Scanner(System.in);
		arryMethds obj =new arryMethds();
		
		
		System.out.print("enter the array size: ");
		int size = sc.nextInt();
		
		int arr[]=new int[size];
		
		obj.getArray(arr, size);
		obj.displayArray(arr, size);
		
		
		
		
		
		
		
	}

}
