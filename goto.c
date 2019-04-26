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
		//printf("%c", a[i]);
		for(int m=0;m<9999;m++){
			b=b+sizeof(a[i]);
			
		}}
		printf("\n %d %c %c %c", b, a[999], a[998], a[997]);
	return 1;
	}}
			
	
	
	
	
	
