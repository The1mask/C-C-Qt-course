#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sort(const void * x1, const void * x2){
	return (*(int*)x1 - *(int*)x2);
}

void bubble(int *num){
	for(int i=0;i<1000;i++){
		for(int j=999;j>i;j--){
			if(num[j-1]>num[j]){
				int temp=num[j-1];
				num[j-1]=num[j];
				num[j]=temp;
			}
		}
	}
}

int main(){
	int arr[1000];
	
	for(int a=0;a<1000;a++)
		arr[a]=rand()%19;
	
	clock_t time;
	time=clock();
	
	qsort(arr, 1000, sizeof(int), sort);
	for(int i=0;i<1000;i++){
		printf("%d", arr[i]);
	}
	
	time=clock() - time;
	printf("%f", (double)time/CLOCKS_PER_SEC);
	
	
	printf("\n");
	
	time=clock();
	
	bubble(arr);
	
	for(int i=0;i<1000;i++){
	printf("%d", arr[i]);
}	
	
	
	
	
	
	
	
	
	time=clock() - time;
	printf("%f", (double)time/CLOCKS_PER_SEC);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
