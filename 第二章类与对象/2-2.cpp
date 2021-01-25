#include<iostream>
using namespace std;
class Car{
	public:
		void disp_welcomemsg();
		int get_wheels();
		void set_wheels(int);
	private:
		int m_nWheels; 
}; 
void Car::disp_welcomemsg(){
	cout << "Welcoe to the car world!" <<endl;
}
int Car::get_wheels(){
	return m_nWheels;
}
void Car::set_wheels(int n){
	m_nWheels = n;
}
int main(){
	Car myfstcar , myseccar;
	myfstcar.set_wheels(4);
	myseccar.set_wheels(6);
	cout<< "my first car wheels num = " << myfstcar.get_wheels() <<endl;
	cout <<"my second car wheels num = " <<myseccar.get_wheels() << endl;
	system("pause");
	return 0 ;
}
	
