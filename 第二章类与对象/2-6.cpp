#include<iostream>
using namespace std;
class Car {
	public:
		Car(string con_carname, int con_seats){
			cout << "Calling Car constructor , set carname , seats!" <<endl;
			m_strCarName = con_carname;
			m_nSeats = con_seats;
		}
		Car(string con_carname){
			cout <<"Calling Car constructor, set carname!" << endl;
		}
		void disp_memmsg(){
			cout<< "carname :" <<m_strCarName <<"," 
			<<"seats:" << m_nSeats <<endl;
		}
	private:
		string m_strCarName;
		int m_nSeats;
};
int main (){
	Car mycar ("my new car" , 4);
	Car tomcar ("toms");
	mycar.disp_memmsg();
	tomcar.disp_memmsg();
	system("pause");
	return 0 ;
}
