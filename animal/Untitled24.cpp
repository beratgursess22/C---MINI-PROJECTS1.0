#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	
	int s;
	
	cout<<"chose one"<<endl;
	cout<<"1-human voise"<<endl;
	cout<<"2-fly voise"<<endl;
	cout<<"3-cat voise"<<endl;
	cout<<"4-dog voise"<<endl;
	cout<<"6-manuel chose "<<endl;
	
	cin>>s;
	
	switch(s){
		case 1: Beep(1000,5000);
		        break;
		case 2: Beep(1500,5000);
		        break;
		case 3: Beep(50000,5000);
		        break;
		case 4: Beep(30000,5000);
		        break;
		case 5: int f,a;
		        cout<<"enter frekans and time"<<endl;
				cin>>f>>a;
				Beep(f,a);
				break;
		defalut:
		        cout<<"mke the correct number"<<endl;
						        
	}
}
