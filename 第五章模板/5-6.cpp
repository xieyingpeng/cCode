#include<iostream>
using namespace std;
template <typename T>

class A {
	private:
		T item;
		static int count;
	public:
		A(const T & t ): item(t) {
			count++;
		}
		~A(){
			count--;
			
		}
		friend void func();
		friend void show(const A<T>& a);
};
template <typename T>
int A <T>::count = 0;
void func(){
	cout <<"int count :" << A <int>::count <<endl ;
	cout <<"double count :" << A <double > ::count << endl;
	
}
void show(const A <int> &a){
	cout << "int £º" <<a.item << endl; 
}
void show(const A <double> &a){
	cout <<"double :" << a.item << endl;
}
int main(){
	func();
	A <int> a(10);
	func();
	A <double> b(1.3);
	show(a);
	show(b);
	system("pause");
	return 0 ;
}
