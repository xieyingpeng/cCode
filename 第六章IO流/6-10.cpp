//�ļ���д��
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ofs ;
	//trunc �Ǵ��ļ�ǰ���ļ���� 
	ofs.open("E:\\c++Code\\������IO��\\text.txt",ios::trunc);//�ж��ļ��Ƿ�򿪳ɹ� 
	char ch = 'a';
	if (ofs){
		for ( int i = 0 ; i<= 26 ;i++){
			if(i % 5 == 0){
				ofs << endl;
			}
				ofs << ch << " " ;
				ch++;
		}
		cout << "write success !" << endl;
	}
	else {
		cout << "write failed !" << endl;
	}
	ofs.close() ;
	system("pause");
	return 0 ;
}
 
