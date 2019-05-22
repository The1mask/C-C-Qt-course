#include <stdio.h>
#include <stdlib.h>
//#include <iostream>

//using namespace std;

int main(){
	char a[1000];
	for (int i=0;i<1000;i++)
	{
	a[i]=rand()%20-10;
	printf("%c", a[i]);
}
	return 0;
	
}
