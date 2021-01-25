//文件的写入
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ofs ;
	//trunc 是打开文件前将文件清空 
	ofs.open("E:\\c++Code\\第六章IO流\\text.txt",ios::trunc);//判断文件是否打开成功 
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
 
