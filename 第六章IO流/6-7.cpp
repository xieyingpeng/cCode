#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double d = sqrt(2.0);
	cout << "精度设置：" << endl;
	for (int i = 0 ; i < 5 ; i++){
		cout.precision(i);
		cout << d << endl;
	} 
	cout << "当前精度为：" << cout.precision() << endl;
	cout << "当前宽度为：" << cout.width() << endl;
	cout.width(6);
	cout << d << endl;
	cout << "当前填充字符：" << cout.fill() << " "  << endl;
	cout.width(10);
	cout << setfill("*") << d << endl;
	system("pause");
	return 0 ; 
}
