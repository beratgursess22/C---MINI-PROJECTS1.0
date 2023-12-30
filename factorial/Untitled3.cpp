#include <iostream>

using namespace std;

int main(){
	
	int n1, factorial=1;
	
	cout<<"enter one number:"<<endl;
	cin>>n1;
	
	for(int b=n1;b>=1;b--){
		
		factorial*=b;
	}
	cout<<factorial;
}
