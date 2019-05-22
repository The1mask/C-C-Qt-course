#include <stdio.h>
#include <stdlib.h>

int main(){
	volatile int a=0;
	extern int b;
	const int c=0;
	typedef char bar;
	goto vhod;
	sizeof(a);
	vhod:
	return 0;
}
