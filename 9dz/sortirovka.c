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

void print(float *num1, float *num2){

	
	qsort(num1, 10, sizeof(int), sort);
	qsort(num2, 10, sizeof(int), sort);
}

int main(){
	int arr[1000];
	float a[10];
	float b[10];
	float c[2]={0,0};
	
	
	
	clock_t time;
	
	for(int i=0;i<10;i++){
	
	for(int a=0;a<1000;a++)
		arr[a]=rand()%19;
	
	time=clock();
	
	qsort(arr, 1000, sizeof(int), sort);
		
	a[i]=clock() - time;
	
	 
	 
	printf("\n qsort:a %f", ((float)a[i]/CLOCKS_PER_SEC));
	
		}
		
	for(int i=0;i<10;i++){
	
	for(int a=0;a<1000;a++)
		arr[a]=rand()%19;
	
	
	time=clock();
	
	bubble(arr);
	
	b[i]=clock() - time;
	printf("\n bubble: %f", ((float)b[i]/CLOCKS_PER_SEC));
	}
	
	print(b, a);
	for(int i=0;i<10;i++){
		c[0]=c[0]+a[i];
		c[1]=c[1]+b[i];
		
		
	
	}
	c[0]=c[0]/10000000;
	c[1]=c[1]/10000000;
	
	
		printf("\n bubble minimum: %f", ((float)b[0]/CLOCKS_PER_SEC));
		printf("\n qsort minimum: %f", ((float)a[0]/CLOCKS_PER_SEC));
		printf("\n bubble maximum: %f", ((float)b[9]/CLOCKS_PER_SEC));
		printf("\n qsort maximum: %f", ((float)a[9]/CLOCKS_PER_SEC));
		printf("\n bubble sred: %f", c[1]);
		printf("\n qsort sred: %f", c[0]);
		
	return 0;
}
