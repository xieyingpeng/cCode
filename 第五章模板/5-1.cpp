#include<iostream>
using namespace std;
template <typename T>
T add(T t1, T t2){
	return t1+t2;
}
int main(){
	cout << "两个整数的和为："<< add(4,2) <<endl;
	cout <<"两个小数的和为："<< add(3.5,8.3) << endl;
	system("pause");
	return 0 ;
	
}
