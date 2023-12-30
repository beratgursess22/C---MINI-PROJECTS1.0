#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, a;
	
	cout<<"enter first number :"<<endl;
	cin>>n1;
	
	cout<<"enter seacond number: "<<endl;
	cin>>n2;
	
	cout<<"enter process:"<<endl;
	cout<<"1.addition"<<endl;
	cout<<"2.multiplying"<<endl;
	cout<<"3.division"<<endl;
	cout<<"4.substraction"<<endl;
	
	cin>>a;
	if(a==1){
		cout<<n1+n2;
	}
	
	else if(a==2){
		cout<<n1*n2;
	}
	
	else if(a==3){
		cout<<n1/n2;
	}
	
	else if(a==1){
		cout<<n1-n2;
	}
	else{
		cout<<"enter the first or second "<<endl;
	}

}

