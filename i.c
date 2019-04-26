#include <stdio.h>
int main(){
	int i[16]={2,5,4,7,4,3,2,1,6,5,7,4,2,1,1,'\0'};
	int s[16];
		for(int n=0;n<15;n++)
		s[n]=0;
	int l[16];
	int k[16];
	for(int f=0;f<15;f++)
	k[f]=0;
	for(int a=0;a<15;a++){
		printf("\n vhod %d", a);
	s[a]=i[a];
	k[a]++;
	for(int b=a+1;b>0;b--){
	
	//printf("\n %d \n %d", a, s[a]);
	printf("\n %d", b);
	if(s[a]!=s[b-2]){
	//a++;
	
	printf("\n %d %d", s[b-2], s[a]);
	l[a]=s[a];
}
else {
	k[b-2]++;
	k[a]=0;
	printf("\n else; %d %d %d", s[a],k[a], s[b-2]);
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

for(int d=0;d<14;d++){
if(l[d]==0){
k[d]=0;}
else{
printf("\n vihod: %d %d", l[d], k[d]);
}}
	return 1;
}
