# include <iostream>

using namespace std;

int main(){
	
	int a, b=0;
	
	cout<<"enter number"<<endl;
	cin>>a;
	
	if(a>2){
		for(int i=2;i<a;i++){
			if(a%i==0){
				b++;
			}
		}
		if (b>=1){
			cout<<"number is not prime number"<<endl;
		}
		else{
			cout<<"number is the prime number"<<endl;
		}
	}
	else if(a==2){
		cout<<"the smallest prime number is 2"<<endl;
	}
	else {
		cout<<"number are 0,1 or number is negative "<<endl;
	}
}
