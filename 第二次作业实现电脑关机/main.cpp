/*
	Name: ʵ�ֶ�̬ 
	Copyright: ��Ҫ���̳кͶ�̬��˼�� 
	Author: лӦ�� 
	Date: 18/11/20 22:40
	Description: 
*/

#include<iostream>
#include "main.h"
using namespace std;
int main() {
	//������������ 
	Mouse mouse;
	Keyboard keyboard;
	Computer computer;
	computer.powerOn(mouse);//�������󴫸�powerOn()���� ʵ�����Ĵ�
	computer.powerOn(keyboard);//�Ѽ��̵Ķ��󴫸�powerOn()���� ʵ�ּ��̵Ĵ� 
	cout <<"���Կ����ɹ���"<< endl;
	cout<<"-------------------------"<<endl;
	computer.powerOff(mouse) ;//�������󴫸�powerOff()���� ʵ�����Ĺر� 
	computer.powerOff(keyboard) ;//�Ѽ��̵Ķ��󴫸�powerOff()���� ʵ�ּ��̵Ĺر� 
	cout <<"���Թػ��ɹ���" << endl; 
	system("pause");
	return 0;
}
