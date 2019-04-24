#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
FILE  *fp;
int a=0;
char b[10000];
if((fp=fopen("wiki.txt", "r"))==NULL){
printf("assadasd");
}
else {
for(a;a<1000;a++){
b[a]=fgetc(fp);
printf("%c", b[a]);
				 }
	 }
	 int h[100];
	 for(int q=0;q<99;q++)
	 h[q]=0;
	 int s=0;
	 char z[100];
	 for(int t=0;t<100;t++){
	z[t]=b[t];//
	//printf("\n t: %d", ); 
	//printf("t: %d %d", t, h[t]);//
for(int i=0;i<10000;i++){
	//printf("i: %d", i);//
	if(b[i+1]==z[t]){	 
	 //printf("%c %c", b[i], z[t]);//
	// h[t]=h[t]+1;//

	 h[t]++;
//printf("zna %d", h[t]);
 }
 }}
	 for(int o=0; o<100;o++)
	 printf("/n %d", h[o]);
return a;

}

