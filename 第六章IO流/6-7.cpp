#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double d = sqrt(2.0);
	cout << "�������ã�" << endl;
	for (int i = 0 ; i < 5 ; i++){
		cout.precision(i);
		cout << d << endl;
	} 
	cout << "��ǰ����Ϊ��" << cout.precision() << endl;
	cout << "��ǰ���Ϊ��" << cout.width() << endl;
	cout.width(6);
	cout << d << endl;
	cout << "��ǰ����ַ���" << cout.fill() << " "  << endl;
	cout.width(10);
	cout << setfill("*") << d << endl;
	system("pause");
	return 0 ; 
}
