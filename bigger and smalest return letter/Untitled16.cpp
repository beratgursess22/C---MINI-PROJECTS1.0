#include <iostream>

using namespace std;

void small(char *a);
void bigger(char *a);
void change();

int main (){
	change();
}
void small(char *a){
	*a+=32;
}
void bigger(char *a){
	*a-=32;
}
void change(){
	while (true){
		
		char x;
		cout<<"enter the letter"<<endl;
		cin>>x;
		
		if (x>='A' && x<='Z'){
			small(&x);
		}
		else{
			bigger(&x);
		}
		cout<<"result: "<<x<<endl;
	}
}
