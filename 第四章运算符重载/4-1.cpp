#include<iostream>
using namespace std;
class A {
	private:
		int x ;
		int y ;
	public:
		A(){
		}
		A(int x1, int y1 ):x(x1),y(y1){
			
		}
		void show() const;
		A operator+(const A &a) const;
		A operator-(const A &a) const;
};
void A ::show() const{
	cout << "(x,y) =  " << "(" << x <<","<< y <<")" << endl;
}
A A::operator+(const A &a) const{
	return A(x+a.x,y+a.y);

}
A A::operator-(const A &a) const{
	return A(x-a.x , y -a.y);
}
//A A :: operator*(const A &a) 
//const{
//	return A(x*a.x,y*a.y);
//}
//A A :: operator/(const A &a) const{
//	return A (x/a.x, y /a.y);
//} 
int main(){
	A  a1(1,2);
	A  a2(4,5);
	A a;
	cout << "a1:" ;
	a1.show() ;
	cout << "a2:" ;
	a2.show();
	a=a1+a2;
	cout <<"����������ӵ�:" ;
	a.show()	;
	a=a1-a2;
	cout << "�������������:" ;
	a.show();
//	a=a1*a2;
//	cout<<"����������˵ã�";
//	a.show();
//	a=a1/a2;
//	cout<<"������������ã�";
//	a.show();
	system("pause");
	return 0 ;
} 
