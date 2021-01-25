/*
	Name: 进行深拷贝和浅拷贝 
	Copyright: 
	Author: 谢应鹏 
	Date: 25/09/20 10:38
	Description: 
*/

#include <iostream>
#include <cstring> 
using namespace std;
class Car{//定义一个Car 类 
	public:
		Car(char *con_ocarname, int con_seats);//声明带参数的构造函数 
		Car(Car &con_refcar);//声明拷贝构造函数
		~Car();//声明析构函数
	private:
		char *m_pCarName;//指针成员，指向存有汽车名称的空间 
		int m_nSeats; 
		
}; 
Car::Car(char *con_pcarname ,int con_seats){//构造函数的定义
	int len = strlen(con_pcarname)+1;
	m_pCarName = new char[len];//开辟空间，m_pCarName 记录首地址
	//strcoy_s(m_pCarName ,len ,con_pcarname);
	m_nSeats =con_seats;
	 
	 
	
}
Car::Car(Car &con_refcar){//定义拷贝构造函数 
	cout << "calling copy constructor!" << endl;
	m_pCarName = con_refcar.m_pCarName;//复制指针值 
	m_nSeats = con_refcar.m_nSeats;
	cout << "end if copy constructor!" <<endl;
	
	
}
Car::~Car(){//定义析构函数
 
	cout <<"destructor is called!" << endl;
	delete[] m_pCarName;//释放m_pCarName指向的空间 
} 
int main(){
	Car mynewcar ("my new car",4);//调用带参数的构造函数类对象 
	Car myseccar(mynewcar);//调用拷贝构造函数定义类对象
	return 0; 
} 
