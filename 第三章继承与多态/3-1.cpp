#include<iostream>
using namespace std;
int main(){
	struct Book{
		string name[30];
		string number[20];
		int age[4];
	}book;
	
	for ( int i  = 0 ; i < 5 ; i++){
		cout <<"�������"<< (i+1)<<"�������� ѧ�� ���䣺" << endl;
		cin >> book.name[i] ;
		cin >>book.number[i] ;
		cin >> book.age[i];
		 
	}
	for (int  i = 0 ; i< 5 ; i++){
		cout << "������"<< book.name[i] << "ѧ�ţ�" <<book.number[i] << "���䣺" <<book.age[i] <<endl;
		
	}
	
	system("pause");
	return 0 ;
	
} 
