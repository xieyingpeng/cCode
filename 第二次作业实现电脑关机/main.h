#ifndef MAIN.H
#define MAIN.H
#include <iostream>
using namespace std;
class USB{
public:
	virtual void turnOn(){//����һ���򿪵��鷽�� 
		cout << "�豸�Ѿ��򿪣�" << endl;	
	}
	virtual void turnOff(){//����һ���ص��鷽�� 
		cout <<"�豸�Ѿ��رգ�" <<endl; 
	}
};
class Mouse:public USB{//�����̳�USB�� 
public:
	virtual void turnOn(){
		cout <<"����Ѿ��򿪣�" <<endl; 
	}
	virtual void turnOff(){
		cout <<"����Ѿ��رգ�" <<endl; 
	}
	
};
class Keyboard:public USB{//������̳�USB��
public:
	virtual void turnOn(){
		cout <<"�����Ѿ��򿪣�" << endl; 
	} 
	virtual void turnOff(){
		cout <<"�����Ѿ��رգ�" << endl; 
	}
	
};
class Computer{
public:
	void powerOn( USB &ref){//�������Ϊ��������� 
		ref.turnOn();
	}
	void powerOff(USB &ref){//�������Ϊ���������
		ref.turnOff();
	}
};
#endif

