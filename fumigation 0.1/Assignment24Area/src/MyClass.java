import java.util.Scanner;

public class MyClass extends Area {
	public static void main(String[] args) {
		
		Scanner sc =new Scanner(System.in);
		Area obj = new Area();
		
		System.out.println("enter the the choice\n1:circle\n2:square\n3:rectangle\n4:triangle");
		
		int choice =sc.nextInt();
		
		switch (choice) {
		case 1:
			System.out.println("enter the radius");
			float rad=sc.nextFloat();
			obj.Circle(rad);
			System.out.println("area of the circle is "+area);
			break;
			
		case 2:
			System.out.println("enter the length");
			float len=sc.nextFloat();
			obj.Square(len);
			System.out.println("area of the square"+obj.area);
			break;
			
		case 3:
			System.out.println("enter the length and bredth");
			float leng=sc.nextFloat();
			float bre=sc.nextFloat();
			obj.rectangle(leng, bre);
			break;
			
		case 4:
			System.out.println("enter the base and height");
			float bas=sc.nextFloat();
			float hei=sc.nextFloat();
			obj.tirangle(bas, hei);
			break;
			
			
		default:	
		
		
		}
		
		
	}

}
