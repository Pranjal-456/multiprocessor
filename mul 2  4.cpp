#include<iostream>
#include<string.h>

using namespace std;

class points{
	
	public :
		
	int Y;
	void get(int Y){
		this->Y = Y;
	}
	void print(){
		cout<<"y= "<<Y<<endl;
	}
	points operator--(int){
		points temp;
		temp.Y = this->Y--;
		return temp;
	}
};
int main()
{
	points e1,e2;
	e1.get(112);
	e1.print();
	e1--;
	e1.print();
	
}	
