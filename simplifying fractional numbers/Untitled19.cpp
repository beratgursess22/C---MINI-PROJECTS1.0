#include <iostream>
using namespace std;

void simplify(int *numerator, int *denominator);

int main(){
	
	int a,b;
	
	cout<<"enter the numerator and denýminator: "<<endl;
	cin>>a>>b;
		
	simplify(&a,&b);
	
	cout<<a<<"/"<<b<<endl;
	
	cout<<"your simplify franctional last process:  "<<endl;
	
	
}

void simplify(int *numerator, int *denominator){
	
	int small=*numerator;
	if (*denominator<small){
		small=*denominator;
	}
	for(int i=2; i<small;i++){
		while(*numerator%i==0 && *denominator%i==0){
			*numerator/=i;
			*denominator/=i;
		}
		if(i>*numerator && i>*denominator){
			break;
			
		}
	}
}

