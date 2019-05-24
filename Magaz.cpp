#include <iostream>
using namespace std;

class item{
	public:
	char  name[3][3]={'g','a', 'z',
					  'm','a','z',
					  'r','o','m'};
	
	int price[4]={0, 12, 5, 9};
	int weight[4]={0, 1,4,10};
	
 
};

class info : public item{
	public:
	
	void dannie(){
		
		
		cout<<"y nas est="<<endl<<"1-"<<name[0][0]<<name[0][1]<<name[0][2]<<endl<<"2-"<<name[1][0]<<name[1][1]<<name[1][2]<<endl<<"3-"<<name[2][0]<<name[2][1]<<name[2][2]<<endl;
		
		
		
		
	}
	
};

class check : public info{
	public:
	
	int summa=0, ves=0;
	void stat(int &a){
		ves=ves+weight[a];
		summa=summa+price[a];
		cout<<"vi kupili za:"<<summa<<endl<<"ves:"<<ves<<endl<<endl;

}
	
	
};

class buy : public check{
	public:
	void konec(){
	cout<<"ves:"<<ves<<endl<<"vsego kupleno"<<summa<<endl;
}
};

int main(){
	item base;
	check vihod;
	buy end;
	info forma;
	
	char tovari[10];
		for(int i=0;i<10;i++)
		
		tovari[i]='\0';
	
	for(int i=0;i<10;i++){
		int a=0, b=0;
		cout<<"1-kupit"<<endl<<"2-info"<<endl;
		cin>>b;
		switch(b){
			case(1):
	forma.dannie();
	cout<<"vvedite 4to kupit"<<endl;
	cin>>a;
	cout<<"vivod"<<endl;
	vihod.stat(a);
	
	break;
	case(2):
	end.konec();
	
	
	vihod.stat(a);
break;
}}
	
	return 0;
}
