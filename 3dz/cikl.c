#include <stdio.h>

int main(){
	int a[3][3][3];
	for(int i=0;i<3;i++){
		int x=0;
		do{
			int y=0;
			while(y<3){
				a[i][x][y]=0;
				printf("%d", a[i][x][y]);
				y++;
			}
			x++;
		}while(x<3);
	}
			
	
	
	return 0;
}
