/*
	Name: ÓÑÔªº¯Êý 
	Copyright: 
	Author: Ð»Ó¦Åô 
	Date: 14/12/20 13:24
	Description: 
*/

#include<iostream>
using  namespace std ;
class IntClass{
	public:
		IntClass(int con_n , int con_m);
		friend int add(IntClass &);
	private:
		int m_nN, m_nM;
};
IntClass::IntClass(int con_n , int con_m){
	m_nN = con_n;
	m_nM = con_m;
}
int add(IntClass &ref){
	return ref.m_nN +ref.m_nM;
}
int main(){
	IntClass intnum(5,7);
	cout <<"add(5,7) = " << add(intnum) << endl;
	system("pause");
	return 0 ;
}
