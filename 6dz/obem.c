#include <stdio.h>

int main(){
	FILE *fp;
	if((fp=fopen("qwer.txt", "r"))==NULL){
printf("asdasd");
}
else {
	
	char a[10000];
	int b=0;
	for(int i=0;i<10000;i++){
		
		a[i]=fgetc(fp);
		if(!feof(fp)){
		//printf("%c", a[i]);
		for(int m=0;m<9999;m++){
			b=b+sizeof(a[i]);
		}
		}
		else{
			a[i]='\0';
			
			
			
		}}
		printf("\n %d", b);
	return 1;
	}}
			
	
	
	
	
	
