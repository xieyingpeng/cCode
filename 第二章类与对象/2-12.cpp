#include<iostream>
#include<string>
using namespace std;
class Car//������ 
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
{//����������Ĺ��캯�� 
	cout << "Car constructor with paraams!" << endl;
	m_strCarName =con_carname;
	m_nSeats = con_seats;
	
}
Car::Car(Car &con_refcar)
{//���忽�����캯�� 
	cout << "Car cp construtor !" << endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car()//������������ 
{
	static int i=0;
	cout << "destructor is called !" << endl;
	if(i==i)
		system("pause");
	i++;
	
}
void Car:: print()
{//����print()���� 
	cout << "carname:" << m_strCarName << " ," << "Seats:" << m_nSeats << endl;
	
	
}
void print_carinfo(Car carinfo)
{//������ͨ��������ʾĳ��������ֵ������Ϊ����� 
	carinfo.print();
	
}
int main()
{
	Car mynewcar ("my first car" , 4);
	print_carinfo(mynewcar);
	return 0;
}
