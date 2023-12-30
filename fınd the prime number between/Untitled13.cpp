#include <iostream>

using namespace std;

void prime(int x, int y, bool *z);

int main (){
	
	int a ,b ;
	bool result =1;
	
	cout<<"enter two number:"<<endl;
	cin>>a>>b;
	
	cout<<(result? "between prime":"between is not prime");
}
void prime(int x, int y, bool *z){
	
	int small;
	
	small=x;
	
	if(y<small)
	
	small=y;
	
	for(int i=2;i<=small;i++){
		if(x%i==0 && y%i==0){
			*z=0;
		}
	}
}
