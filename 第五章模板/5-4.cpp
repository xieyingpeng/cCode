#include<iostream>
#include<string>
using namespace std ;
template <typename T>
class Compare{
	private:
		T t1, t2;
	public:
		Compare(T a , T b) :t1(a),t2(b){
			
		}
		T max(){
			return t1>t2 ? t1: t2;
			
		}
		T min(){
			return t1 < t2 ? t1: t2;
		}
};
int main(){
	Compare <int > c1 (1,3);
	cout <<" int max:" <<c1.max()  << endl;
	Compare <double > c2 (1.2 , 4.3) ;
	cout <<" double min :" << c2.min() << endl;
	Compare <char> c3('a' , 'b');
	cout <<" char max:"<< c3.max() <<endl;
	Compare <float > c4(4.6,6.3) ;
	cout <<"float max :" << c4.max()<<endl;
	cout <<"float min:" << c4.min() <<endl;  
	system("pause");
	return 0 ;
}
