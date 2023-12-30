# include <iostream>

using namespace std;

int main(){
	
	int a, number, biggernumber;
	
	cout<<"how much number enter:"<<endl;
	cin>>a;
	
	for(int i=0;i<a;i++){
		
		cout<<"enter number:"<<endl;
		cin>>number;
		
		if (number>biggernumber){
			
			biggernumber=number;
		}
	}
	cout<<"bigger number is:"<<biggernumber;
	
}
