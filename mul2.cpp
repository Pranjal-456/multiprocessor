#include<iostream>
#include<string.h>

using namespace std;

class print{
	public :
		
		int a;
		float b;
		char c[100];
		
		void get(){
			cout<<"print get"<<endl;
		}
		void get(int a){
			this->a = a;
			cout<<"A = "<<a<<endl;
		}
		
		void get(int a,float b){
			this->a = a;
			this->b = b;
			
			cout<<"enter A = "<<a<<endl;
			cout<<"enter B = "<<b<<endl;
		}
		
		void get(int a,float b,char c[]){
		
		this->a = a;
    	this->b = b;
    	strcpy(this->c,c);
			
			cout<<"enter A = "<<a<<endl;
			cout<<"enter B = "<<b<<endl;
			cout<<"enter C = "<<c<<endl;	
		}
};

int main()
{
	print o1;
	
	o1.get();
	o1.get(34);
	o1.get(34,10.20);
	o1.get(34,10.20,"Pranjal");
	
}
