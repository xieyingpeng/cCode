/*
	Name: 常量引用 
	Copyright: 
	Author: 谢应鹏 
	Date: 14/12/20 12:47
	Description: 
*/

#include<iostream>
using namespace std;
void func1 (const int * x){
	cout << "const in*:" << *x << endl;
	
}
void func1 (int *x){
	cout << "int *:" << *x <<endl;
}
void func2 (const int &x){
	cout << "const int&:" << x << endl; 
}
void func2(int &x){
	cout <<"int &:"<< x << endl;
}
int main(){
	const int a = 1;
	int b = 2;
	func1(&a);
	func1(&b);
	func2(a);
	func2(b);
	system("pause");
	return 0 ; 
	
}
