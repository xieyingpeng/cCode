/*
	Name: ��ȡϵͳ��ǰʱ�� 
	Copyright: ��Ҫ���ÿ⺯��time.h 
	Author: лӦ�� 
	Date: 15/10/20 18:10
	Description: 20190521335
	
	time.h��������Ľṹ�� 
	�ṹ������tm�����ں�ʱ����C�Ľṹ����ʽ���棬
	tm�ṹ�Ķ������£�
	struct tm{
		int tm_sec;//�� ������Χ��0��59  ������62
		int tm_min;//��
		int tm_hour;//Сʱ
		int tm_mon;//��
		int tm_year;//��
		int tm_mday;//�� 
		int tm_wday;//�� 
*/

#include <iostream>
#include "main.h"//����ͷ�ļ�  �ļ������Լ���� ��ʽΪ:xxx.h 
#include <time.h>  ////����⺯���������ں�ʱ����صĺ����ͽṹ 
using namespace std;
int main(){
	Date date;//�������ڶ��� 
	Time times;//����ʱ����� 
	date.set_Year( );
	date.set_Month();
	date.set_Day() ; 
	date.set_Weeks();
	times.set_Hours();
	times.set_Minutes();
	times.set_Sceonds();
	cout <<"	"<<"******************************************" << endl;
	//cout <<"		"<<"�������ڼ���" << endl;
	cout << "		"<<"����������  " << date.get_Weeks() << endl;
	//cout << "		"<<"����������ǣ�" << endl;
	cout << "		"<<"��������Ϊ��"<<date.get_Year() <<" " <<"�� " << date.get_Month() <<" "<<"�� "<< date.get_Day()<<" " <<"�� " << endl;
	//cout << "		"<<"����ʱ���ǣ�" << endl; 
	cout << "		"<<"��ǰʱ���ǣ�" <<  times.get_Hours()<<" " <<"��"<< times.get_Minutes()<<" " << "��"<< times.get_Sceonds()<<" " <<endl;
	cout <<"	"<<"******************************************" << endl;
}
