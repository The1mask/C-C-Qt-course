#include <stdio.h>

int main(){
	FILE *fp;
	if((fp=fopen("qwer.txt", "r"))==NULL){
printf("asdasd");
}
else {
	
	char a[10000];
	int b=0;
	for(int i=0;i<9999;i++){
		
		a[i]=fgetc(fp);
		if(!feof(fp)){
		//printf("%c", a[i]);
		for(int m=0;m<9999;m++){
			b=b+sizeof(a[i]);
		}
		}
		else{
			a[i]='a';
			
			
			
		}}
		printf("\n %d  5: %c 6 : %c 7 : %c 8: %c 9: %c", b, a[9995], a[9996], a[9997], a[9998], a[9999]);
	return 1;
	}}
			
	
	
	
	
	
