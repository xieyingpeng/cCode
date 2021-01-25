#include <iostream>
using namespace std ;
class Animal{
	private :
		int age ;
		string name ;
	public:
		Animal(){
			
		}
		Animal(string name ,int age){
			this->name = name ;
			this->age = age ; 
		}
		void print(){
			cout << "name:" <<name <<"age:" << age << endl;
			cout <<"ºÍlow" << endl;
		}
};
class Cat :public Animal{
	public :
		Cat(){
		}
		Cat(string name ,int age):Animal(name ,age){
		}
	
};
int main(){
	Cat cat("xie",29) ;
	cat.print();
	system("pause");
	return 0;
}
