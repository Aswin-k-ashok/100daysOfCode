import java.util.Scanner;

public class prime {
	public static void main(String ar[]) {
		@SuppressWarnings("resource")
		Scanner sc =new Scanner (System.in);
		
		System.out.println("enter a number: ");
		int chkprm=sc.nextInt();
		int flag=0;
		
		if(chkprm==0) {
			System.out.println("the number is not prime");
		}
		else if(chkprm==1) {
			System.out.println("the number is not prime");
		}
		
		else {
			for(int i=0;i<chkprm/2;i++) {
				if(chkprm%2==0) {
					flag=1;
					break;
				}
			}
			if(flag==0) {
				System.out.println("The Enterd number is prime");
			}
			if(flag==1) {
				System.out.println("The Enterd number is not prime");
			}
			
		}
		
		
	
		
		
	}

}
