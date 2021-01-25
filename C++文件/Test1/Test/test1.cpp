
#include<iostream>
#include <string>
#include"main.h"
using namespace std;
int main() {
	cout << "access to static fucnc \"get_totalnum()\":totalnum=" << Student::get_totalnum() << endl;
	Student std_tom("Tom" ,20);
	cout <<std_tom.get_stdname() <<  " , totalnum=" <<std_tom.get_totalnum(std_tom) << endl;
	return 0;

}
