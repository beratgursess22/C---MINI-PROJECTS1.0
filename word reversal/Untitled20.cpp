#include <iostream>

using namespace std;

int main(){
	
	char a[100];
	
	char b;
	
	int lenght;
	
	cout<<"enter the text: "<<endl;
	cin>>a;
	
	for(lenght=0;a[lenght]!='\0';lenght++);
		
	for(int i=0;i<(lenght/2);i++){
			
		b=a[i];
		a[i]=a[lenght-i-1];
		a[lenght-i-1]=b;
		}
	cout<<"invers the text: "<<a;
}
