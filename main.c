#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//번호 고르기
void select_number(int n){

	printf("\n\n");
	printf("------------------------------------------------\n");
	printf("1. put a package\n");
	printf("2. get my package\n");
	printf("3. check the storage status\n");
	printf("4. find my package\n");
	printf("0. exit\n");
	printf("------------------------------------------------\n");
	printf("command : ");
	scanf("%d", &n);
	
} 
int main(int argc, char *argv[]) {
	int n;
	puts("----- Unmanned Delivery Storage System START ------\n");
    select_number(n);
	
	switch(n){
		case 0:
			printf("");
			break;
		case 1:
			printf("");
			break;			
		case 2:
			printf("");
			break;
		case 3:
			printf("");
			break;
		case 4:
			printf("");
			break;
        default:
        	printf("---------> Wrong cmd!! input again!..\n");
        	do{
        		select_number(n);
			}while(!(0<=n&&n<5));
			switch(n){
	        	case 0:
			        printf("");
			        break;
		        case 1:
			        printf("");
			        break;			
	         	case 2:
		          	printf("");
		        	break;
	           	case 3:
		         	printf("");
	        		break;
	        	case 4:
			        printf("");
		          	break;
        		
			}
        	
		    											
	}
	
	return 0;
}
