#include <iostream>
#include <stdlib.h>
using namespace std;

	class printa{
		public:
		char pole[4][4]={'|', '|', '|', '|',
						'|', ' ', ' ', ' ',
						'|', ' ', ' ', ' ',
						'|', ' ', ' ', ' '};
		
	

	};

	class hod:public printa{
		public:
		int p=0;
		int h=0;
		void clear(){
			for(int i=1;i<4;i++){
				for(int a=1;a<4;a++){
					pole[i][a]=' ';
			}}
				p=0;
				h=0;
		}
		
		void prnt(){
			for(int i=1;i<4;i++){
				cout<<endl;
				for(int x=1;x<4;x++){
				  cout<<pole[i][x];
				  cout<<pole[0][0];
				  			
				  			  }}
						  }
		
		void rnd(){
			int i=0;
			int n=0 ,m=0;
			do{
				n=rand()%3+1;
				m=rand()%3+1;
			if(pole[n][m]!='x' && pole[n][m]!='o'){
			pole[n][m]='o';
			i=5;
		}
		}while(i<1);
	
			}
		
		
		int checkwin(){
			
		if(pole[1][1]=='x' && pole[1][2]=='x' && pole[1][3]=='x'){
			return 3;
		}
		if(pole[2][1]=='x' && pole[2][2]=='x' && pole[2][3]=='x'){
			return 3;
		}
		if(pole[3][1]=='x' && pole[3][2]=='x' && pole[3][3]=='x'){
			return 3;
		}
		if(pole[1][1]=='x' && pole[2][1]=='x' && pole[3][1]=='x'){
			return 3;
		}
		if(pole[1][2]=='x' && pole[2][2]=='x' && pole[3][2]=='x'){
			return 3;
		}
		if(pole[1][3]=='x' && pole[2][3]=='x' && pole[3][3]=='x'){
			return 3;
		}
		if(pole[1][1]=='x' && pole[2][2]=='x' && pole[3][3]=='x'){
			return 3;
		}
		if(pole[1][3]=='x' && pole[2][2]=='x' && pole[3][1]=='x'){
			return 3;
		}
		else{
			
			return 0;
			
		}
		}
	
	int checkpl(){
		
		if(pole[1][1]=='o' && pole[1][2]=='o' && pole[1][3]=='o'){
			return 1;
		}
		if(pole[2][1]=='o' && pole[2][2]=='o' && pole[2][3]=='o'){
			return 1;
		}
		if(pole[3][1]=='o' && pole[3][2]=='o' && pole[3][3]=='o'){
			return 1;
		}
		if(pole[1][1]=='o' && pole[2][1]=='o' && pole[3][1]=='o'){
			return 1; cout<<"pobeda"<<endl;
		}
		if(pole[1][2]=='o' && pole[2][2]=='o' && pole[3][2]=='o'){
			return 1;
		}
		if(pole[1][3]=='o' && pole[2][3]=='o' && pole[3][3]=='o'){
			return 1;
		}
		if(pole[1][1]=='o' && pole[2][2]=='o' && pole[3][3]=='o'){
			return 1;
		}
		if(pole[1][3]=='o' && pole[2][2]=='o' && pole[3][1]=='o'){
			return 1;
		}
		else{
			
			return 0;
			
		}
	}
	void scnd_move(int land1, int land2){
		for(int i=1;i<4;i++){
			for(int c=1;c<4;c++){
		if(land1==i && land2==c && pole[i][c]!='o' && pole[i][c]!='x'){
			pole[i][c]='o';}
			}}	
		
	cout<<p<<endl;
			p++;
			h++;

	};
	
	void move(int land1, int land2){
		for(int i=1;i<4;i++){
			for(int c=1;c<4;c++){
		if(land1==i && land2==c && pole[i][c]!='o' && pole[i][c]!='x'){
			pole[i][c]='x';}
			}}	
		
	cout<<p<<endl;
			p++;
			h++;

	};

	int checkii(){
					
			if(pole[1][1]=='x' && pole[1][2]=='x' && pole[1][3]!='o' && pole[1][3]!='x'){
				pole[1][3]='o'; return 0;
			}
			else{
			if(pole[1][1]=='x' && pole[1][3]=='x' && pole[1][2]!='o' && pole[1][2]!='x'){
				pole[1][2]='o'; return 0;
			}
				else{
			if(pole[1][1]=='x' && pole[2][1]=='x' && pole[3][1]!='o' && pole[3][1]!='x'){
				pole[3][1]='o'; return 0;
			}
					else{
			if(pole[1][1]=='x' && pole[3][1]=='x' && pole[2][1]!='o' && pole[2][1]!='x'){
				pole[2][1]='o'; return 0;
			}
					else{
			if(pole[2][1]=='x' && pole[3][1]=='x' && pole[1][1]!='o' && pole[1][1]!='x'){
				pole[1][1]='o'; return 0;
			}
					else{
			if(pole[3][1]=='x' && pole[3][2]=='x' && pole[3][3]!='o' && pole[3][3]!='x'){
				pole[3][3]='o'; return 0;
			}
					else{
			if(pole[3][2]=='x' && pole[3][3]=='x' && pole[3][1]!='o' && pole[3][1]!='x'){
				pole[3][1]='o'; return 0;
			}
					else{
			if(pole[3][1]=='x' && pole[3][3]=='x' && pole[3][2]!='o' && pole[3][2]!='x'){
				pole[3][2]='o'; return 0;
			}	
					else{
			if(pole[1][3]=='x' && pole[2][2]=='x' && pole[3][1]!='o' && pole[3][1]!='x'){
				pole[3][1]='o'; return 0;
			}
					else{
			if(pole[2][1]=='x' && pole[2][2]=='x' && pole[2][3]!='o' && pole[2][3]!='x'){
				pole[2][3]='o'; return 0;
			}
					else{
			if(pole[2][2]=='x' && pole[2][3]=='x' && pole[2][1]!='o' && pole[2][1]!='x'){
				pole[2][1]='o'; return 0;
			}
					else{
			if(pole[2][1]=='x' && pole[2][3]=='x' && pole[2][2]!='o' && pole[2][2]!='x'){
				pole[2][2]='o'; return 0;
			}
					else{
			if(pole[1][2]=='x' && pole[2][2]=='x' && pole[3][2]!='o' && pole[3][2]!='x'){
				pole[3][2]='o'; return 0;
			}
					else{
			if(pole[1][3]=='x' && pole[3][3]=='x' && pole[2][3]!='o' && pole[2][3]!='x'){
				pole[2][3]='o'; return 0;
			}
					else{
			if(pole[1][3]=='x' && pole[2][3]=='x' && pole[3][3]!='o' && pole[3][3]!='x'){
				pole[3][3]='o'; return 0;
			}
					else{
			if(pole[3][3]=='x' && pole[2][3]=='x' && pole[1][3]!='o' && pole[1][3]!='x'){
				pole[1][3]='o'; return 0;
			}
					else{
			if(pole[2][2]=='x' && pole[3][2]=='x' && pole[1][2]!='o' && pole[1][2]!='x'){
				pole[1][2]='o'; return 0;
			}
					else{
			if(pole[3][1]=='x' && pole[2][2]=='x' && pole[1][3]!='o' && pole[1][3]!='x'){
				pole[1][3]='o'; return 0;
			}
				
			
			
				}}}}}}}}}}}}}}}}}				
			
		  return 1;
		}

  int ii(){
	
			
			
	switch(p){
		case(1):
			if(pole[1][1]=='x' || pole[1][3]=='x' || pole[3][1]=='x' || pole[3][3]=='x'){
				pole[2][2]='o';   
			}
			if(pole[2][2]=='x'){
				pole[1][1]='o';
			}
			if(pole[1][2]=='x' || pole[2][1]=='x' || pole[3][2]=='x' || pole[2][3]=='x'){
				pole[2][2]='o';
			}
			break;
		case(2):
		
			
			if(checkii()==1)
			rnd();
			
			break;
		
		case(3):
		
			if(checkii()==1){
			rnd();
		}
			
			break;
		case(4):
			if(checkii()==1){
			rnd();}		
			break;
		case(5):
		return 2;
		break;
		};
		
	for(int i=1;i<4;i++){
				cout<<endl;
				for(int x=1;x<4;x++){
				  cout<<pole[i][x];
				  cout<<pole[0][0];
				  			
				  			  }}	
			return 0;
		}	

//Сложный ИИ//
//Рандом ИИ//
	int randomii(){
		
		switch(h){
			case 1:
			rnd();
			prnt();
			break;
			case 2:
			rnd();
			prnt();
			break;
			case 3:
			rnd();
			prnt();
			break;
			case 4:
			rnd();
			prnt();
			break;
			case 5:
			return 2;
			}
		return 0;
		}
		
		//Рандом ИИ//
		//2 игрока//
	
	};



int main(){
	class printa pr;
	class hod hd;
	int menu=0;
	bool end=false;

	cout<<"Приветствую в игре"<<endl;
		do{
			cout<<"Вы в главном меню, выберете действие"<<endl
			<<"1-Игра со сложным компьютером"<<endl
			<<"2-Игра со средним компьютером"<<endl
			<<"3-Игра с легким компьютером"<<endl
			<<"4-Режим на двоих"<<endl
			<<"5-Выход"<<endl;
			cin>>menu;
				int pobeda=0;
				int pole1=0, pole2=0;
	
	  switch(menu){
		case (1):
		pobeda=0;
		do{
			
		
		cout<<"Ваш ход:";
			cin>>pole1;
			cin>>pole2;
			system("clear");
		hd.move(pole1,pole2);
		pobeda=hd.ii();
		if(pobeda==2){
			cout<<"Ничья!"<<endl;
			hd.clear();
		}
		else{
		cout<<endl;
		pobeda=hd.checkpl();
		if(pobeda==1){
			cout<<"ИИ победил!"<<endl;
			hd.clear();
		}
			else{
		pobeda=hd.checkwin();
		if(pobeda==3){
			cout<<"Вы выиграли!и"<<endl;
			hd.clear();
				}
			}
		}
	}while(pobeda<1);
	break;
		case (2):
		
		
		
		break;
		
		
		case (3):
		do{
			
		
		cout<<"Ваш ход:";
			cin>>pole1;
			cin>>pole2;
			system("clear");
		hd.move(pole1,pole2);
		pobeda=hd.randomii();
		if(pobeda==2){
			cout<<"Ничья!"<<endl;
			hd.clear();
		}
		else{
		cout<<endl;
		pobeda=hd.checkpl();
		if(pobeda==1){
			cout<<"ИИ победил!"<<endl;
			hd.clear();
		}
			else{
		pobeda=hd.checkwin();
		if(pobeda==3){
			cout<<"Вы выиграли!"<<endl;
			hd.clear();
				}
			}
		}
	}while(pobeda<1);
		break;
		case (4):
		do{
			
		
		cout<<"Ваш ход:";
			cin>>pole1;
			cin>>pole2;
			
		hd.move(pole1,pole2);
		cout<<"Ваш ход:";
			cin>>pole1;
			cin>>pole2;
			
		hd.scnd_move(pole1,pole2);	
		hd.prnt();
		if(pobeda==2){
			cout<<"Ничья!"<<endl;
			hd.clear();
		}
		else{
		cout<<endl;
		pobeda=hd.checkpl();
		if(pobeda==1){
			cout<<"ИИ победил!"<<endl;
			hd.clear();
		}
			else{
		pobeda=hd.checkwin();
		if(pobeda==3){
			cout<<"Вы выиграли!"<<endl;
			hd.clear();
				}
			}
		}
	}while(pobeda<1);
		break;
		case(5):
		end=true;
		break;
	}
	}while(end<0);
	
	
	
	
	
	
	return 0;

}
