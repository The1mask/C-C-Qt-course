#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sozd(){

FILE *fa;
		
	int mas[1000];
	
	srand(time(0));
	for (int i=0; i<1000; i++){
		mas[i] = rand() % 100;
	}
	
	if((fa = fopen("a", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(int i=0; i<1000; i++){
		fprintf(fa, "%d \n", mas[i]);}
}
fclose(fa);
}

int main(){
	int i=0;
	do{
		sozd();
		getchar();
		remove("a");
		i++;
		
	}while(i<10);
	
	
	
	
	

}
