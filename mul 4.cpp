#include<iostream>
#include<string.h>

using namespace std;

class points{
	public :
	int x;
	void set(int x){
		this->x = x;
	}
	void print(){
		cout<<"x= "<<x<<endl;
	}
	points operator ++(int){
		points temp;
		temp.x = this->x++;
		return temp;
	}
	
};

int main(){
	points p1,p2,;
	p1.set(10);
	p1.print();
	p1++;
	p1.print();
	
}
