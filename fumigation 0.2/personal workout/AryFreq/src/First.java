import java.util.Scanner;

public class First {
	
public static void main(String[] args) {
	
	int lmt,count =1 ;
	int ary1[]=new int[100];
	int ary2[]=new int[100];
	Scanner sc = new Scanner (System.in);
	
	System.out.println(" enter the array size: ");
	lmt =sc.nextInt();
	
	System.out.println("enter the array elements: ");
	for(int i=0;i<lmt;i++) {
		ary1[i]=sc.nextInt();
	}
	
	for(int i=0;i<lmt;i++) {
		count=1;
		if(ary1[i]!=-1) {
			for(int j=i+1;j<lmt;j++) {
				if(ary1[i]==ary1[j]) {
					ary1[j]=-1;
					 count++;
					
				}
				
				
			}
		}
		
		ary2[i]=count;	
	}
	
	
	for(int i=0;i<lmt;i++) {
		if(ary1[i]!=-1) {
			System.out.println(ary1[i]+"is repeated "+ary2[i]+"times");
		}
	}
	
	
	
	
	
	
}
	
	
	
}
