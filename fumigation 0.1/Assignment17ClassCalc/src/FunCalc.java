import java.util.Scanner;

public class FunCalc {
public static void main(String ar[]) {
	
	Scanner sc = new Scanner (System.in);
	CalcCls s1=new CalcCls();
	
	System.out.println("enter your choice \n1:addition\n2:subtraction\n3:multiplication\n4:division");
	int choice=sc.nextInt();
	
	System.out.println("enter 2 numbers:");
	s1.number1=sc.nextInt();
	s1.number2=sc.nextInt();
	
	
	switch(choice) {
	case 1:
		s1.add();
		break;
	case 2:
		s1.sub();
		break;
	case 3:
		s1.mul();
		break;
	case 4:
		s1.div();
		break;
	default:
		System.out.println("select a valid input");
	}
	
	
	
	
	
}
	
	
}
