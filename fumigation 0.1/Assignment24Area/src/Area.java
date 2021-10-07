
public  class Area {

	
	float area;

	
	void Circle(float r) {
		 area=(float) ((r*r)*3.14);
		System.out.println("area of circle "+area);
		
	}
	
	void Square(float l) {
		area=l*l;
		System.out.println("area of square "+area);
		
	}
	
	void rectangle(float l,float b) {
		area=l*b;
		System.out.println("area of rectangle "+area);
		
	}
	void tirangle(float b,float h) {
		area=b*h/2;
		System.out.println("area of triangle "+area);
	}
	
	

}
