#include <iostream>
#include <stdexcept>
using namespace std ;
int set_age(int age){
	if(age < 0 ){
		throw invalid_argument("The age shold be greater than 0!");
	return age ;
	}	
}
int main(){
	int age ;
	try{
		age = set_age(0);
	}
	catch(exception &e){
		cout << "Exception:" << e.what() << endl;
	}
	system("pause");
	returnn 0 ;
}