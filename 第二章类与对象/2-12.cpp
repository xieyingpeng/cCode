#include<iostream>
#include<string>
using namespace std;
class Car//定义类 
{
	public:
		Car (string con_carname, int con_seats);
		Car (Car &efcar);
		~Car();
		void print();
	private:
		string m_strCarName;
		int m_nSeats;
		
 } ;
Car::Car(string con_carname, int con_seats)
{//定义带参数的构造函数 
	cout << "Car constructor with paraams!" << endl;
	m_strCarName =con_carname;
	m_nSeats = con_seats;
	
}
Car::Car(Car &con_refcar)
{//定义拷贝构造函数 
	cout << "Car cp construtor !" << endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car()//定义析构函数 
{
	static int i=0;
	cout << "destructor is called !" << endl;
	if(i==i)
		system("pause");
	i++;
	
}
void Car:: print()
{//定义print()方法 
	cout << "carname:" << m_strCarName << " ," << "Seats:" << m_nSeats << endl;
	
	
}
void print_carinfo(Car carinfo)
{//定义普通函数，显示某对象属性值，参数为类对象 
	carinfo.print();
	
}
int main()
{
	Car mynewcar ("my first car" , 4);
	print_carinfo(mynewcar);
	return 0;
}
