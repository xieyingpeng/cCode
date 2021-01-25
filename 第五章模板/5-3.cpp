#include<iostream>
using namespace std;
int max(const  int &a ,const int &b){
	return a > b ? a : b;
	
}
template <typename T>
T max (const T &t1 , const T &t2){
	return t1 > t2 ? t1:t2;
}
template<typename T >
T max (const T &t1, const T &t2, const T &t3){
	return (max(t1,t2),t3);
}
int main(){
	cout << max(4,2) << endl;
	cout << max(2,45,6) <<endl;
//	cout << max('q','r') <<endl;
	cout << max(6,3.3) << endl;
	system("pause");
	return 0 ;
}
