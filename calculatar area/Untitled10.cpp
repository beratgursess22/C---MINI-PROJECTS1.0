# include <iostream>

using namespace std;

float circle(int x);
float recatngular(int x, int y);
float square(int x);

int main( ){
	
	int s;
	
	
	cout<<"chose the process"<<endl;
	cout<<"1.rectangular area"<<endl;
	cout<<"2.circle area"<<endl;
	cout<<"3.square area"<<endl;
	
	cin>>s;
	
	switch(s){
		case 1: int a,b;
		        cout<<"enter lat"<<endl;
		        cin>>a;
		        cout<<"enter height"<<endl;
		        cin>>b;
		        cout<<recatngular(a,b);
		        break;
		case 2: int radius;
		        cout<<"enter the radius:"<<endl;
		        cin>>radius;
		        cout<<circle(radius);
		        break;
	    case 3: int side;
	            cout<<"enter the one side"<<endl;
	            cin>>side;
	            cout<<square(side);
	            break;
	    defalut: cout<<"wrong chose"<<endl;
	    break;
	    
	}
	
}
float circle(int x){
	return 3.14*x;
}
float recatngular(int x, int y){
	return x*y;
}
float square(int x){
	return x*x;
}
