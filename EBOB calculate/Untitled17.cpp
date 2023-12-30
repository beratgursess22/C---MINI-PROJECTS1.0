#include <iostream>

using namespace std;

void ebobb(int x, int y, int *e);



int main(){
	
	int a, b, ebob;
	
	cout<<"enter the numbers for ebob: "<<endl;
	cin>>a>>b;
	
	ebobb(a,b,&ebob);
	
	cout<<"yours number are ebob: "<<ebob;
}

void ebobb(int x, int y, int *e){
	
	*e=1;
	
	int commondiv=2;
	
	while(x!=1 && y!=1){
		while(x%commondiv==0 && y%commondiv==0){
			
			*e*=commondiv;
			x/=commondiv;
			y/=commondiv;
		}
		while(x%=commondiv){
			x/=commondiv;
		}
		while(y%=commondiv){
			y/=commondiv;
		}
		++commondiv;
	}
}
