//get()º¯Êý
#include <iostream>
using namespace std;
int main(){
	cout << "ÇëÊäÈë×Ö·û´®£º";
	cout << "first call :" << cin.get() << endl;
	char ch ;
	cin.get(ch);
	cout << "ÇëÊäÈë×Ö·û´®£º" << endlt;
	cout <<"second call :" << ch << endl;
	char str[10];
	cin.get(str,8,'t');
	cout << "ÇëÊäÈë×Ö·û´®£º";
	cout <<"third call: " << str << endl;
	system("pause");
	return 0 ;
} 
