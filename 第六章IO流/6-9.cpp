#include <iostream> 
#include <fstream>
using namespace std;
int main(){
	char buf[256];
	ifstream ifs ("E:\\c++Code\\第六章IO流\\text.txt");
	cout << "文件里面的内容是：" << endl;
	while(!ifs.eof()){//判断文件是否到达结尾 
		ifs.getline(buf,256,'\n');
		cout << buf << endl;
	} 
	ifs.close();
	system("pause");
	return 0;
}
