#include <iostream>
#include <string>
using namespace std ; 
int main(){
	int int_n1 , int_n2;
	cout << "请输入两个整数："  ;
	cin >> int_n1 >> int_n2 ;
	try{
		cout <<"Maybe exception code :" << endl;
		if(int_n2 == 0){
			throw 0 ;
		}
		else {
			cout << int_n1 <<"/" << int_n2 <<" = " << (int_n1/int_n2) << endl;
			
		}
	}
	catch (int){
		cout << "exception:div 0! " << endl;
	}
	system("pause");
	return 0 ;
}
