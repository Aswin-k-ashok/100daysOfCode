import java.util.Scanner;

public class MultiAry {
	
	public static void main(String ar[]) {
		
		Scanner sc =new Scanner(System.in);
		
		int[] ary1=new int[20];
		int[] ary2=new int[20];
		System.out.println("enter a limit: ");
		int limit=sc.nextInt();
		int multi = 0;
		
		System.out.println("enter array elements: ");
		for(int i=0;i<limit;i++) {
			ary1[i]=sc.nextInt();
			}

		
		for(int i=0,j=i+1;i<limit;i++,j++) {
				multi=ary1[i]*ary1[j];
				
		
			ary2[i]=multi;
		}
		
		for(int i=0;i<limit-1;i++) {
			System.out.print(" "+ary2[i]);
		}
		
	}
}
