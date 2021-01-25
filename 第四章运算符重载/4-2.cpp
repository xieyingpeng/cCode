#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class A{
	private:
		int x;
		int y;
	public:
		A(){
		}
		A(int x1, int y1):x(x1),y(y1){
		}
		void show() const;
		 A operator++();
		 A operator--(int );
};
void A::show() const
{
	cout <<"(x,y)=" << "("<<x<<"," << y<< ")" <<endl;
	
}
A A::operator++(){
	++x;
	++y;
	return *this;
}
A A::operator--(int){

	A a = *this;
	++(*this);
	return a;
}
int main(){
	A a1(1,2);
	A a2(3,4);
	//1++).show();
	(++a2).show();
	system("pause");
	return 0 ;
}
	
