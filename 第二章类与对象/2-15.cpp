#include<iostream>
#include<string>
using namespace std;
class Car
{
public:
	Car(string con_carname, int con_seats;
	Car(Car &refcar);
	~Car();
private:
	string m_strCarName;
	int m_nSeats;
};
Car::Car(string con_carname, int con_seats)//定义带参数的构造函数
{
	cout << "Car costructor with params!" << endl;
	m_strCarName = con_carname;
	m_nSeats = con_seats;
}
Car::Car(Car &con_refcar)//定义拷贝构造函数
{
	cout << "Car cp constructor!" << endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car()//定义析构函数
{
	static int i = 0;
	cout << "destrcctor is called!" << endl;
	if (i == 1)
	
		system("pause");
	i++;
	
}
int main()
{
	Car mynewcar("my first car ", 4);
	Car mysecar("mynewcar");
	return 0;
}