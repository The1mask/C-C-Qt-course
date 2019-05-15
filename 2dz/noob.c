#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int mas[1000];
	int i, a;
	srand(time(0));
	for (i=0; i<1000; i++){
		mas[i] = rand() % 100;
	}
	
	FILE *fa, *fb, *fc, *fd, *fe, *ff, *fg, *fh, *fi, *fj, *fk;
		

	if((fa = fopen("a", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fa, "%d \n", mas[i]);}
}
	
	
	if((fb = fopen("b", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fb, "%d \n", mas[i]);}
}


	if((fc = fopen("c", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fc, "%d \n", mas[i]);}
}


	if((fd = fopen("d", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fd, "%d \n", mas[i]);}
}

	if((fe = fopen("e", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fe, "%d \n", mas[i]);}
}


	if((ff = fopen("f", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(ff, "%d \n", mas[i]);}
}

	if((fg = fopen("g", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fg, "%d \n", mas[i]);}
}

if((fh = fopen("h", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fh, "%d \n", mas[i]);}
}

	if((fi = fopen("i", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fi, "%d \n", mas[i]);}
}


	if((fj = fopen("j", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fj, "%d \n", mas[i]);}
}

if((fk = fopen("k", "w"))==NULL){
		printf("sadasdsa");
		exit(1);
	}
	else {
	for(i=0; i<1000; i++){
		fprintf(fk, "%d \n", mas[i]);}
}

}
