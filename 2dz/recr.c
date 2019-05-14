#include <stdio.h>
int a[3];
int d=0;
int cu(i){
	int c, b=0;
	if (i>=3) return 1;
		else {
			if (a[i]>=10)
				{b=a[i]/10;
				c=a[i]-b*10;
				d=d+b+c;}
			else 
				d=d+a[i];
		
			//a[0]=a[0]+a[i+1];//
	}
			return i+cu(i+1);
}
int main(){
	int r,e;
		printf("\n Enter your bith day:");
	scanf("%d", &a[0]);
		printf("\n Enter your bith mounth:");
	scanf("%d", &a[1]);
		printf("\n Enter your bith year: 19");
	scanf("%d", &a[2]);	
	e=0;
	r=cu(e);
		printf("\n summa 4isel: %d \n", d);
		return 0;
	}		
