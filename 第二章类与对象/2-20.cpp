/*
	Name: 类中内联函数 
	Copyright: 
	Author: 
	Date: 14/12/20 13:19
	Description: 
*/

#include<iostream>
using namespace std ;
 class Test{
 	public:
 		Test():m_nX(10){
		 }
 		inline void print();
 		void display(int y);
 	private :
 		int m_nX;
 }; 
 void Test::print(){
 	cout <<m_nX << endl; 
 }
 void Test::display(int y){
 	cout << m_nX*y << endl;
 	
 }
 int main(){
 	Test obj;
 	obj.display(10);
 	obj.print();
 	system("pause");
 	return 0 ;
 }
