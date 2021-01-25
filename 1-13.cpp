/*
	Name: 方法重载 
	Copyright: 
	Author: 谢应鹏 
	Date: 14/12/20 12:46
	Description: 
*/

#include<iostream>
using namespace std ;
void add(int x, int y  ){
	cout <<"int :" << x+y <<endl;
	
}
void add(float x){
	cout << "flaot:" <<x << endl;
}
double add (double x , double y){
	return x+y;
}
int main(){
	add(2.3);
	add(10, 39);
	cout << add(2.3, 3.5)<< endl;
	system("pause");
	return 0 ;
	
}
