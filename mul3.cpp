#include<iostream>
#include<string.h>

using namespace std;

class A{

   public :

	void Raj(){
		cout<<"Raj wear shirt & paint"<<endl;
	}

};

class C : public A{
	
	public :
		
	void Raj(){
		cout<<"Raj wear kurta & topi"<<endl;
	}
};


int main()
{
	C o1;
	o1.Raj();
	o1.A::Raj();
}
