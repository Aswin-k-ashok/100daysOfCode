
public class Area {
	
	public static float area;
	void Circle(float r) {
		float area=(float) ((r*r)*3.14);
		System.out.println("area="+area);
		
	}
	
	void Square(float l) {
		float area=l*l;
		System.out.println("area="+area);
		
	}
	
	void rectangle(float l,float b) {
		float area=l*b;
		System.out.println("area="+area);
		
	}
	void tirangle(float b,float h) {
		float area=b*h/2;
		System.out.println("area="+area);
	}
	
	

}
