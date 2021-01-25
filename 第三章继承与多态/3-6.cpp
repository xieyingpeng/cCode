#include<iostream>
using namespace std;
class Animal{
	public:
		int get_age(){
			return m_nAge;
			
		}
		int get_weight(){
			return m_nWeight;
		}
		void set_age(int param_age){
			m_nAge = param_age;
		}
		void set_weigth(int param_weight){
			m_nWeight = param_weight;
			
		}
		void speak(){
			cout <<" animal language !" << endl;
		}
	private :
		int m_nWeight;
		int m_nAge;
};
class Cat:public Animal{
	public:
		void set_age(string param_name);
		void speak(){
			cout << " cat language :miamiao£¡"  <<endl; 
		}
	private:
		string m_strName;
			
	
};
int main(){
	Cat cat;
	Animal *panimal = &cat;n
	panimal->set_age(5);
	cout << " base type : age=" << panimal->get_age() << endl;
	cat.speak();
	panimal->speak();
	system("pause");
	return 0;	
} 
