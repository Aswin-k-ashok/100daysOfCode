import java.util.Scanner;

public class IncomeTx {
	public static void main(String ar[]) {
		
		Scanner sc =new Scanner(System.in);
		
		System.out.println("Enter the annual income: ");
		float incom= sc.nextFloat();
	
		float result = txClc(incom);
		
		System.out.println("Income Tax amount: "+result);
		
		
	}
	
	static float txClc(float incom) {
		float tax=0;
		if(incom<250000) {
			tax=0;
		}
		else if(incom>1000000) {
			tax=(incom*30)/100;
		}
		else if(incom>500000) {
			tax=(incom*20)/100;
		}
		else if(incom>250000) {
			tax=(incom*5)/100;
		}
		
		
		return tax;
		
		
	}
	


}
