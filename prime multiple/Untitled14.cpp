#include <iostream>

using namespace std;

int main(){
	
	int number , multiple=2;
	
	cout<<"enter number"<<endl;
	cin>>number;
	
	cout<<"yours number is prime multiple"<<endl;
	
	while(number>1){
		while(number%multiple==0){
			
			cout<<multiple<<endl;
			number/=multiple;
		}
		++multiple;
	}
}
