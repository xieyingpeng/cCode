#include <iostream> 
#include <fstream>
using namespace std ;
int main(){
	ifstream ifs ;
	ifs.open("E:\\c++Code\\������IO��\\text.txt",ios::in);//�����������������뷽ʽ��
	if(!ifs){
		cout << "��ʧ�ܣ�" << endl;
		 
	} 
	else {
		cout << "�򿪳ɹ���" << endl;
		 
	}
	ifs.close();
	system("pause");
	return 0 ;
}
