#include<iostream>

using namespace std;

class A{
	
	public:
		
	virtual void calculate() = 0;
};

class B : public A{
	
	public: 
	
	int r,b,h,y,z;
	
	void calculate(){
		
		cout<<"Enter Redius :";
		cin>>r;
		cout<<"Area of Ciecle : "<<3.14*r*r<<endl<<endl;
		
		cout<<"Enter Length Of Triangle : ";
		cin>>b;
		cout<<"Enter Hight Of Triangle : ";
		cin>>h;
		cout<<"Area Of Triangle : "<<0.5*b*h<<endl<<endl;
			
		cout<<"Enter  Of Length Rectangle : ";
		cin>>y;
		cout<<"Enter  Of Hight Rectangle : ";
		cin>>z;
		cout<<"Area Of Rectangle : "<<0.5*y*z<<endl;
						
	}	
};

int main(){
	
	B obj;
	
	obj.calculate();
	
	return 0;
}
