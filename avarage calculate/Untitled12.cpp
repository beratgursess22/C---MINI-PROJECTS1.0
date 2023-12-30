#include <iostream>
#include <iomanip>

using namespace std;

float avarage(int a);

int main(){
	
	int b;
	
	cout<<"how much number enter "<<endl;
	cin>>b;
	
	cout<<fixed<<setprecision(5);
	
	cout<<"avarage the numbers:"<<avarage(b);
}
float avarage(int a){
	
	float addition =0;
	float number;
	
	for(int i=0;i<a;i++){
		
		cout<<"enter number"<<endl;
		cin>>number;
		
		addition+=number;
	}
	return addition/a;
}
