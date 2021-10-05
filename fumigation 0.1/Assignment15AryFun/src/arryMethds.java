import java.util.Scanner;

public class arryMethds {
	
	public void getArray(int a[] ,int size) {
		Scanner  sc = new Scanner (System.in);
		System.out.println("enter the array elements: ");
		for(int i=0;i<size;i++) {
			a[i]=sc.nextInt();
		}
		
		
	}
	
	public void displayArray(int a[],int size) {
		
		System.out.print("the entered array is: ");
		for(int i=0;i<size;i++) {
			System.out.print(" "+a[i]);
		}
	}
	
	

}
