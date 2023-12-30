#include <iostream>

using namespace std;

int main(){
	
	char text[1000];
	
	char delet[1000];
	
	cout<<"enter the text: "<<endl;
	cin>>text;
	
	cout<<"enter the delete lette: "<<endl;
	cin>>delet;
	
	int newe=0;
	
	for(int i=0;text[i]!='\0';i++){
		
		text[newe]=text[i];
		
		bool k= false;
		
		for(int e=0;delet[e]!='\0';e++){
			
			char a=text[i];
			if(a>90){
				a-=32;
			}
			char b=delet[e];
			if(b>90){
				b-=32;
			}
			if(a==b){
				k=true;
			}
			if(!k){
				++newe;
			}
		}
	}
	text[newe]='\0';
	cout<<"new text look like: "<<text;
	
}
