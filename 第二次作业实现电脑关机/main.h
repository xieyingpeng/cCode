#ifndef MAIN.H
#define MAIN.H
#include <iostream>
using namespace std;
class USB{
public:
	virtual void turnOn(){//定义一个打开的虚方法 
		cout << "设备已经打开！" << endl;	
	}
	virtual void turnOff(){//定义一个关的虚方法 
		cout <<"设备已经关闭！" <<endl; 
	}
};
class Mouse:public USB{//鼠标类继承USB类 
public:
	virtual void turnOn(){
		cout <<"鼠标已经打开！" <<endl; 
	}
	virtual void turnOff(){
		cout <<"鼠标已经关闭！" <<endl; 
	}
	
};
class Keyboard:public USB{//键盘类继承USB类
public:
	virtual void turnOn(){
		cout <<"键盘已经打开！" << endl; 
	} 
	virtual void turnOff(){
		cout <<"键盘已经关闭！" << endl; 
	}
	
};
class Computer{
public:
	void powerOn( USB &ref){//里面参数为基类的引用 
		ref.turnOn();
	}
	void powerOff(USB &ref){//里面参数为基类的引用
		ref.turnOff();
	}
};
#endif

