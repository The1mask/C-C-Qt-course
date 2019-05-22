#include <stdio.h>

int main(){
	int a=0;
	scanf("%d", &a);
	
	if(a>9){
		if(a>99){
			if(a>999){
				a=a/1000;
			}else{
				a=a/100;
			}
		}else{
			a=a/10;
		}
	}
	
				
	switch(a){
		case(1):
		printf("%d \n", a);
		break;
		case(2):
		printf("%d \n", a);
		break;
		case(3):
		printf("%d \n", a);
		break;
		case(4):
		printf("%d \n", a);
		break;
		case(5):
		printf("%d \n", a);
		break;
		case(6):
		printf("%d \n", a);
		break;
		case(7):
		printf("%d \n", a);
		break;
		case(8):
		printf("%d \n", a);
		break;
		case(9):
		printf("%d \n", a);
		break;
	
	}
	
	
	
			
	
	
	
	return 0;
	
}
