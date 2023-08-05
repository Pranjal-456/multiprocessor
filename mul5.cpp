#include<iostream>
#include<string.h>

using namespace std;

class points{
	
	public :
		int a,b;
		
		void get(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
	    void set()
	    {
	    cout<<"A= "<<a <<"B= "<<b<<endl;
	    }
	    
	    points operator+(points t){
		points temp;
		
		temp.a= this->a+t.a;
		temp.b= this->b+t.b;
		return temp;
	}
};

int main()
{
	points r,r1,r2;
	r.get(10,35);
	r.set();
	r1.get(20,40);
	r1.set();
	r2=r1+r;
	r2.set();
}
