//wirte()函数可以将一个字符串的部分或全部字符串送到输出流
#include <iostream>
#include <string> 
using namespace std;
int main(){
	char* p ="xie yingpeng";
	cout.write(p,6).put('\n');//把字符串的地址和长度传输出流 
//	cout.write(p,strlen(p)) << endl;
	system("pause");
	return 0;
}
 
