#include <stdio.h>
#include <string.h>

struct kniga{
	char nm[10][10];
	char ne[10][10];};
int main(){
	
		
	int w=0; //s4et4ik dlya posimvolnogo poiska
	
	int q=0; //s4et4ik dlya zapolnenia knigi
	struct kniga kn;
	
	char o=0; //dlya zapolneniya entera fgets
for(int a=0;a<10;a++){
	kn.nm[a][a]=0;
	kn.ne[a][a]='\0';
}
vvod:



	printf("\n Vibirete deistvie: \n 1-Vvesti dannie. \n 2-Vivesti dannie. \n 3-Poisk \n :");
int i=0; //s4et4ik dlya vivoda
int g=0;	//dlya vibora poiska
char z[10]; //posimvolnii poisk
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
	printf("z: %d", strlen(z));
	for(int t=0;t<10;t++){
		for(int u=0; u<10; u++){
			if(kn.nm[t][u]==z[u] || kn.ne[t][u]==z[u]){
				w++;
				if(w=strlen(z)){e=t;}
				}
				else{
					break;
					}
		}}
	if(e!=0) {
		printf("V %d stroke %s %s", e, &kn.nm[e][0], &kn.ne[e][0] );
	}
	else {printf("Ne naideno");
		w=0;}
	goto vvod;
	
	}
	
	
	goto vvod;
	
	return 1;
goto vvod;
}
}
