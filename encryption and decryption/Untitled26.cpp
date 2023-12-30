#include <iostream>
#include <iomanip>

using namespace std;

int change(char a){
	
	switch(a){
		case '0': return 0;
		
		case '1': return 1;
		
		case '2': return 2;
		
		case '3': return 3;
		
		case '4': return 4; 
		
		case '5': return 5; 
		
		case '6': return 6; 
		
		case '7': return 7; 
		
		case '8': return 8; 
		
		case '9': return 9;}
	 
	}
	
int main()
{
	
	char pi[135]="141592653584793238462643383279502884197169399375105820974945";

	
	char letter[135];
	
	int se;
	
	cout<<"enter letter:"<<endl;
	cin.getline(letter,135);
	
	cout<<"1.make encryption:"<<endl;
	cout<<"2. make  decryption"<<endl;
	cin>>se;
	
	a:
	
	if(se==1){
		for(int i=0;letter[i]!='\0';i++){
			letter[i]=letter[i]+change(pi[i]);
		}
		cout<<"result:"<<endl;
	}
	else if (se==2){
		for (int i=0;letter[i]!='\0';i++){
			letter[i]=letter[i]-change(pi[i]);
		}
	}
	else{
		cout<<"wrong enter"<<endl;
		goto a;
	}
	cout<<letter;
	
}
	

