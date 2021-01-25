#include<iostream>
using namespace std;
class Car{
	public:
		Car(string con_carname,int con_seats);
		Car(Car &refcar);
		~Car();
	private:
		string m_strCarName ;
		int m_nSeats;
};
Car::Car(string con_carname , int con_seats){
	cout <<"Car constructor with params!" <<endl;
	m_strCarName = con_carname;
	m_nSeats = con_seats;
}
Car::Car(Car &con_refcar){
	cout <<"Car up construtor!"  <<endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car(){
	static int i = 0;
	cout <<"destructor is called !" <<endl;
	if(i==1){
		system("pause");
	}
	i++;
}
int main(){
	Car mynewcar("my first car",4);
	Car mysecar (mynewcar);
	return 0 ;
}

