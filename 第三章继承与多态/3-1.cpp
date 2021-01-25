#include<iostream>
using namespace std;
int main(){
	struct Book{
		string name[30];
		string number[20];
		int age[4];
	}book;
	
	for ( int i  = 0 ; i < 5 ; i++){
		cout <<"请输入第"<< (i+1)<<"个的姓名 学号 年龄：" << endl;
		cin >> book.name[i] ;
		cin >>book.number[i] ;
		cin >> book.age[i];
		 
	}
	for (int  i = 0 ; i< 5 ; i++){
		cout << "姓名："<< book.name[i] << "学号：" <<book.number[i] << "年龄：" <<book.age[i] <<endl;
		
	}
	
	system("pause");
	return 0 ;
	
} 
