#include<iostream>
using namespace std;
class Car{
	public:
		void disp_mems_value();
	private:
		int m_nWheels;
		int m_nSeats;
		int m_nLength;
};
void Car::disp_mems_value(){
	cout <<"wheels=" << m_nWheels <<endl;
	cout <<"seats = "<<m_nSeats<< endl;
	cout <<"length = " << m_nLength <<endl;
	
}
int main(){
	Car mycar;
	mycar.disp_mems_value();
	system("pause");
	return 0 ;
	
}
