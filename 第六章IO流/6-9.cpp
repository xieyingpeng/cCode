#include <iostream> 
#include <fstream>
using namespace std;
int main(){
	char buf[256];
	ifstream ifs ("E:\\c++Code\\������IO��\\text.txt");
	cout << "�ļ�����������ǣ�" << endl;
	while(!ifs.eof()){//�ж��ļ��Ƿ񵽴��β 
		ifs.getline(buf,256,'\n');
		cout << buf << endl;
	} 
	ifs.close();
	system("pause");
	return 0;
}
