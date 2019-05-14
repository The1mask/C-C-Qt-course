#include <stdio.h>
#include <string.h>



struct kniga{
	char nm[10][10];
	char ne[10][10];};





int main(){
	
		
	int w=0; //s4et4ik dlya posimvolnogo poiska
	char v[10];
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
	v[b]='\0';
}}
vvod:



	printf("\n Vibirete deistvie: \n 1-Vvesti dannie. \n 2-Vivesti dannie. \n 3-Poisk \n :");
int i=0; //s4et4ik dlya vivoda
int g=0;	//dlya vibora poiska
int d=0;
int p=0; //Osnovnoe meny
// postro4nii poisk
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
		scanf("%s", &v);
		
	for(int x=0;x<10;x++){
		if(v==&kn.ne[x][0]){
			printf("\n ne nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);
			v[x]='\0';
				  goto vvod;
		}
		else {printf("\n nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);}
			  goto vvod;
	
	}
	case 2:
			printf("\n Vveite nomer:");
				//scanf("%d", &o);
				scanf("%d", &v);
for(int c=0;c<10;c++){
		if(v==&kn.nm[c][0]){
			printf("\n ne nashel");
			printf("\n %s %d", &kn.nm[c][c], v);
				  
		}
		else {printf("\n nashel");
			printf("\n %s %s", kn.nm[c][0], v);}

			 
}
 goto vvod;
//z[]=0; 
	
	case 3:
	
	printf("\n Vvedite poisk:");
	scanf("%s", &z);
	
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				if(kn.nm[a][b]==z[0] || kn.ne[a][b]==z[0]){
					
					d++;
					for(int f=b;f<10;f++){
						if(kn.nm[a][f]==z[d] || kn.ne[a][f]==z[d]){
							d++;
							if(strlen(z)==d){
							m[a]=a;
							d=0;
						
						}}
						
					}}
					
					}}
					for(int a=0;a<10;a++){
						if(m[a]!='.'){
					printf("\n V %d stroke nashel %s %s", m[a], &kn.nm[m[a]][0], &kn.ne[m[a]][0]);
					m[a]='.';
	}}
	
	
	goto vvod;
	
	}
	
	
	goto vvod;
	
	return 1;
goto vvod;
}
}
