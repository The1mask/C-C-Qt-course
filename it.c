#include <stdio.h>
int main(){
	FILE *fp;
		 char i[1000];

	if((fp=fopen("qwer.txt", "r"))==NULL){
printf("asdasd");
}
else {
for (int x=0; x<999;x++){
i[x]=fgetc(fp);
printf("%c", i[x]);
	 }
	char s[1000];
		for(int n=0;n<999;n++)
		s[n]=0;
	char l[1000];
	int k[1000];
	for(int f=0;f<99;f++)
	k[f]=0;
	for(int a=0;a<999;a++){
	//	printf("\n vhod %d", a);
	s[a]=i[a];
	k[a]++;
	for(int b=a+1;b>0;b--){
	
	//printf("\n %d \n %d", a, s[a]);
	//printf("\n %d", b);
	if(s[a]!=s[b-2]){
	//a++;
	
	//printf("\n %c %c", s[b-2], s[a]);
	l[a]=s[a];
}
else {
	k[b-2]++;
	k[a]=0;
	//printf("\n else; %c %d %c", s[a],k[a], s[b-2]);
	l[a]=0;
	s[a]=0;
}
}
	//else{
		//printf("\n else");
		//for(int c=0;c<14;c++)
		//k[a]++;
		//a++;
	}

for(int d=0;d<100;d++){
if(l[d]==0){
k[d];}
else{
printf("\n vihod: %c %d", l[d], k[d]);
}}
	return 1;
}
}

