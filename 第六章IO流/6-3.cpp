//get()����
#include <iostream>
using namespace std;
int main(){
	cout << "�������ַ�����";
	cout << "first call :" << cin.get() << endl;
	char ch ;
	cin.get(ch);
	cout << "�������ַ�����" << endlt;
	cout <<"second call :" << ch << endl;
	char str[10];
	cin.get(str,8,'t');
	cout << "�������ַ�����";
	cout <<"third call: " << str << endl;
	system("pause");
	return 0 ;
} 
