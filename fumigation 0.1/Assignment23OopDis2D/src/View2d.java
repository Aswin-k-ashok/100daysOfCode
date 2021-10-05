import java.util.Scanner;

public class View2d {
	
	public static void main(String ar[]) {
		
			ViewAr obj = new ViewAr();
			
			Scanner sc =new Scanner (System.in);
			
			System.out.println("enter the limit: ");
			
			int limit = sc.nextInt();
			
			int ary[][]= new int [limit][limit];
			
			obj.getArray(ary, limit);
			obj.displayArray(ary, limit);
			
			
		
	}
		
		
}
