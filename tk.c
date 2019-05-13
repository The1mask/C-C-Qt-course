#include <stdio.h>
#include <string.h>



struct kniga{
	char nm[10][10];
	char ne[10][10];};





int main(){
	
		
	int w=0; //s4et4ik dlya posimvolnogo poiska
	
	int q=0; //s4et4ik dlya zapolnenia knigi
	struct kniga kn;
	char z[10]; //posimvolnii poisk
	char m[10];
	char o=0; //dlya zapolneniya entera fgets
for(int a=0;a<10;a++){
	for(int b=0;b<10;b++){
	kn.nm[a][b]='\0';
	kn.ne[a][b]='\0';
	z[b]='.';
	m[b]='.';
}}
vvod:



	printf("\n Vibirete deistvie: \n 1-Vvesti dannie. \n 2-Vivesti dannie. \n 3-Poisk \n :");
int i=0; //s4et4ik dlya vivoda
int g=0;	//dlya vibora poiska
int d=0;
int p=0; //Osnovnoe meny
char v[10];// postro4nii poisk
int e=0; //s4et4ik stroki
	scanf("%d", &p);
	switch(p){
	case 1:
	fgets(&o, 10, stdin);
		printf("\n Vvedite name:");
				
				//scanf("%s", &kn.ne[q][0]);
					fgets(&kn.ne[q][0], 10, stdin);
		
		printf("\n Vvedite nomer:");
		
			fgets(&kn.nm[q][0], 10, stdin);
			//scanf("%d", &kn.nm[q][q]);
			q++;
		goto vvod;
	case 2:
		do{printf("\n Name:%s %d", &kn.ne[i][0], i);
		   printf("\n Number:%s %d", &kn.nm[i][0], i);
			//printf("\n Name11:%c", kn.nm[0][0]);
			i++;
		  }
		  while(i<q);
		  goto vvod;
	case 3:
	printf("\n Poisk po name -1 \n Poisk po number -2 \n Posimvolnii poisk - 3 \n :");
	scanf("%d", &g);
	switch(g){
		case 1:
		printf("\n Vveite imya:");
		scanf("%d", &o);
		fgets(&v[0], 10, stdin);
	for(int x=0;x<10;x++){
		if(strcmp(&v[0], &kn.ne[x][x])){printf("\n ne nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);
				  goto vvod;
		}
		else {printf("\n nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);}
			  goto vvod;
	
	}
	case 2:
			printf("\n Vveite nomer:");
				//scanf("%d", &o);
				scanf("%d", &z);
for(int c=0;c<10;c++){
		if(strcmp(&z, &kn.nm[c][c])){
			printf("\n ne nashel");
			printf("\n %d %d", kn.nm[c][c], z);
				  
		}
		else {printf("\n nashel");
			printf("\n %d %d", kn.nm[c][c], z);}

			 
}
 goto vvod;
//z[]=0; 
	
	case 3:
	
	
	scanf("%s", &z);
	printf("\n %s %d", z, strlen(z));
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				if(kn.nm[a][b]==z[0]){
					printf("\n pervoe %d %d %c %c", a, b, kn.nm[a][b], z[0]);
					d++;
					for(int f=b+1;f<10;f++){
						if(kn.nm[a][f]==z[f]){
							d++;
							printf("\n naidenoo %d %c", d, kn.nm[a][f]);
							if(strlen(z)==d){
							m[a]=a;
						printf("asdads");
						}}
					}}
					else
					printf("\n %d %d %d %c", a, b, kn.nm[a][b], z[0]);
					}}
					for(int a=0;a<10;a++){
						if(m[a]!='.'){
					printf("\n nashel %s", &kn.nm[m[a]][0]);
	}}
	
	
	goto vvod;
	
	}
	
	
	goto vvod;
	
	return 1;
goto vvod;
}
}
