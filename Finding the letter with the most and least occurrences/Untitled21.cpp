#include <iostream>

using namespace std;

int main(){
	
	char letter[1000];
	
	cout<<"enter the text: "<<endl;
	cin>>letter;
	
	int alphabet[26];
	
	for(int i=0;i<26;i++){
		alphabet[i]=0;
	}
	for (int i=0; letter[i]!='/0';i++){
		
		char control=letter[i];
		
		int field;
		
		if(control>='a'){
			field=control-'a';
		}
		if(control>='A'){
			field=control-'A';
		}
		alphabet[field]++;
	}
	int bigger=-1, smallest=1001;
	
	char max,min;
	
	for(int i=0;i<26;i++){
		
		if(alphabet[i]==0){
			continue;
		}
		if(alphabet[i]>bigger){
			bigger=alphabet[i];
			max=i+'A';
		}
		if(alphabet[i]<smallest){
			smallest=alphabet[i];
			min=i+'A';
		}
		
	}
	
	cout<<"there are most letter in the text: "<<max<<""<<bigger<<endl;
		
	cout<<"there is least letter int he text: "<<min<<""<<smallest<<endl;
		
	
	
	
}
