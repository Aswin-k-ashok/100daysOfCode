#include <stdio.h>
int main (void){

	int row;
	int column;
	int number=7;

	for(row=1;row<=number;row++){
		for(column=1;column<=number;column++){
			if(row==1||column==1||column==number||row==3){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

	for(row=1;row<=number;row++){
		for(column=1;column<=number;column++){
			if(row==1||row==number||row==column){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

		for(row=1;row<=number;row++){
		for(column=1;column<=number;column++){
			if(column==1||column==number||column==4&&row==5){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

	
		for(row=1;row<=number;row++){
		for(column=1;column<=number;column++){
			if(column==4){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

		
		for(row=1;row<=number;row++){
		for(column=1;column<=number;column++){
			if(column==1||column==number||row==column){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

	return 0;
}