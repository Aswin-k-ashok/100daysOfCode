import java.util.Scanner;

public class ViewAr {

	public void getArray(int [][]a,int size) {
		Scanner sc =new Scanner (System.in);
		System.out.println("enter the array elements");
		
		for(int i=0;i<size;i++) {
			for(int j=0;j<size;j++) {
				a[i][j]= sc.nextInt();
			}
		}
		
		
	}
	
	public void displayArray(int [][]a,int size) {
		
		System.out.println("Array elements are: ");
		for(int i=0;i<size;i++) {
			for(int j=0;j<size;j++) {
				System.out.print(a[i][j]+" ");
			}
			System.out.println("\n");
		}
		
	}
	
}
