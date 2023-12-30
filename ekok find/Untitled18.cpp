# include <iostream>

using namespace std;

void ekokk(int x, int y, int *e);

int main (){
	
	int a, b, ekok;
	
	cout<<"enter two numbers for ekok:  "<<endl;
	cin>>a>>b;
	
	ekokk(a,b,&ekok);
	cout<<"yours numbers are ekok :  "<<ekok;
}
void ekokk(int x, int y, int *e){
	
	*e=1;
	
	int common=2;
	
	while(x!=1||y!=1){
		while(x%common==0 || y%common==0){
			*e*=common;
			
			if(x%common==0){
				x/=common;
			}
			if(y%common==0){
				y/=common;
			}
		}
		++common;
	}
}
