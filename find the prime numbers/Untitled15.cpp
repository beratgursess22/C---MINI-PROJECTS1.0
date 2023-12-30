#include <iostream>

using namespace std;

bool prime(int x);

int main (){
	
	int a;
	
	cout<<"enter the number:"<<endl;
	cin>>a;
	
	for (int i=2;i<=a;i++){
		
		if (prime(i)){
			cout<<i<<endl;
		}
	}
}
bool prime(int x){
	
	for(int i=2;i<x;i++){
		
		if(x%2==0){
			return false;
		}
		
	}
	return true;
}
