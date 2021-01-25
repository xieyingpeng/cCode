#include <iostream>
using namespace std;
int int_div (int a , int b){
	if ( b == 0){
		throw 0;
		cout << "after thorw!" << endl;
	}
	return a / b;
}
int main(){
	int a ,b ;
	while (1){
		cout << "Please input two integers:" ;
		cin >> a >> b;
		try {
			cout <<"Maybe exception code :" << endl;
			cout << a <<"/" << b <<"=" << int_div(a , b)  << endl;
			cout << " in try , after div!" << endl;
		}
		catch ( int) {
			cout << "exception : div 0!" <<  endl;
			
		}
		cout << "after try...catch!" << endl;
	}
	system("pause");
	return 0 ;
}
