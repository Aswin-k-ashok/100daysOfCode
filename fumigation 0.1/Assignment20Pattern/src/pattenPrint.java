
public class pattenPrint {

	public static void main(String ar[]) {
		
		int limit=5;
		int number=1;
		
		for(int i=0;i<limit;i++) {
			for(int j=0;j<i;j++) {
				System.out.print(" "+number);
				number++;
			}
			System.out.println("\n");
		}
		
		
		
	}
}
