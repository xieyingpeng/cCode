#include <iostream>
using namespace std ;
template <typename T ,typename U>//类模板 
class A {
	private :
		T t1 ;
		U u1;
	public:
		void show();
//		A(T t1, U u2){
//			this->t1 = t1 ;
//			this->u1 = u1;
//		}
		T add (T t1 ,U u1){//函数模板
		 
			return t1+u1;
		}
		U abs(T t1 , U u1){
			return t1-u1;
		}
		bool isEquals (T t1, U u1){
			return t1==u1;
		}
		
		
};
template <typename T ,typename U>
void A<T ,U>::show(){//类外定义函数 
	cout << "helloWorld! "<< endl;
}
int main(){
	A<int,int >a;
	cout <<"两个整数的和为："<< a.add(13,53) << endl;
	cout <<"两个数比较结果为："<< a.isEquals(34,24) <<endl;
	A<double,double> b ;
	cout <<"两个整数的差为："<< b.abs(53.6,13.9) << endl;
	a.show();
	b.show() ;f
	system("pause");
	return 0 ;
}
