#include <stdio.h>
#include <string.h>

struct kniga{
	int nm[10][10];
	char ne[10][10];};
int main(){
	
	
	
	int q=0;
	struct kniga kn;
	//for(int l=0;l<9; l++)
	//{&kn.nm[l][l]='\0';
	//&kn.ne[l][l]='\0','\0';	
		//}
	char o=0;
vvod:



	printf("\n Vibirete deistvie: \n 1-Vvesti dannie. \n 2-Vivesti dannie. \n 3-Poisk \n :");
int i=0;
int g=0;	
	int p=0;
	char v[10];
	scanf("%d", &p);
	switch(p){
	case 1:
	fgets(&o, 10, stdin);
		printf("\n Vvedite name:");
				
				//scanf("%s", &kn.ne[q][0]);
					fgets(&kn.ne[q][q], 10, stdin);
		
		printf("\n Vvedite nomer:");
			scanf("%d", &kn.nm[q][q]);
			q++;
		goto vvod;
	case 2:
		do{printf("\n Name:%s %d", &kn.ne[i][i], i);
		   printf("\n Number:%d %d", kn.nm[i][i], i);
			printf("\n Name:%s %s %s", &kn.ne[1][0], &kn.ne[1][1], &kn.ne[1][2]);
			i++;
		  }
		  while(i<q);
		  goto vvod;
	case 3:
	printf("\n Poisk po name -1 \n Poisk po number -2 \n :");
	scanf("%d", &g);
	switch(g){
		case 1:
		printf("\n Vveite imya:");
		scanf("%d", &o);
		fgets(&v[0], 10, stdin);
	for(int x=0;x<10;x++){
		if(strcmp(&v[0], &kn.ne[x][x])){printf("\n ne nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);
		}
		else {printf("\n nashel");
			printf("\n %s %s", &kn.ne[x][x], &v);}
	
	
	}
	case 2:
	
	
	
	}
	
	
	goto vvod;
	//printf("\n %d %c", kn.nm[98], kn.ne[98]);
	return 1;
goto vvod;
}
}
