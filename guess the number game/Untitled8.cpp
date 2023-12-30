#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	
	int number;
	char answer ='e';
	
	srand(time(NULL));
	
	while(answer ='e'){
		
		int number2;
		
		cout<<"guess the number"<<endl;
		cin>>number;
		
		while(number!=number2){
			if (number>number2){
				cout<<"enter number small"<<endl;
			}
			else{
				cout<<"enter the number bigger"<<endl;
			}
			cin>>number;
		}
	}
	cout<<"true guess"<<endl;
	cout<<"is game continue"<<endl;
	cin>>answer;
}

