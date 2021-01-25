/*
	Name: 用 “+ ”将字符串连接 
	Copyright: 
	Author: 谢应鹏 
	Date: 14/12/20 12:45
	Description: 
*/

#include<iostream>
using namespace std ;
int main(){
	string s1 = "hello world";
	string s2 = "chyan zhi bo ke ";
	cout << "before swap :" << endl;
	cout << "s1:" <<s1 << endl << "s2:" <<s2<<endl;
	s1.swap(s2);
	cout << "after swap :" <<endl;
	cout << "s1:" << s1 << endl <<"s2:" << s2 << endl;
	system("pause");
	return 0 ;
	} 
