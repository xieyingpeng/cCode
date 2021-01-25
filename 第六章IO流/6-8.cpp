#include <iostream> 
#include <fstream>
using namespace std ;
int main(){
	ifstream ifs ;
	ifs.open("E:\\c++Code\\第六章IO流\\text.txt",ios::in);//构造输入流，以输入方式打开
	if(!ifs){
		cout << "打开失败！" << endl;
		 
	} 
	else {
		cout << "打开成功！" << endl;
		 
	}
	ifs.close();
	system("pause");
	return 0 ;
}
