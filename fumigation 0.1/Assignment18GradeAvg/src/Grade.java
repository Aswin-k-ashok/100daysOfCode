import java.util.Scanner;

public class Grade {
	public static void main(String ar[]) {
		
		Scanner sc = new Scanner (System.in);
		GrdCalc obj=new GrdCalc();
		
	System.out.println("enter the marks obtained by the sutdent: ");
	
	System.out.println("written test: ");
	obj.writ= sc.nextFloat();
	
	System.out.println("lab exams: ");
	obj.lab=sc.nextFloat();
	
	System.out.println("assignments: ");
	obj.asig=sc.nextFloat();
	
	float result=obj.grdEq();
	
	System.out.println("The grade of the student is: "+result);
	
	
	
	
	
	
		
	}
}
