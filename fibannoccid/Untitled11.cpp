#include <iostream>

using namespace std;

int fi(int x);

int main(){
	
	int a;
	
	cout<<"enter number:"<<endl;
	cin>>a;
	
	cout<<"fibanocci:: "<<fi(a);
	
}
int fi(int x){
	if(x<0)
		return -1;
	if (x==0)
		return 0;
	if(x==1)
		return 1;
	return fi(x-1)+fi(x-2);
}

