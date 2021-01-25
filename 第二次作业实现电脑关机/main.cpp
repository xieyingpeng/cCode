/*
	Name: 实现多态 
	Copyright: 主要理解继承和多态的思想 
	Author: 谢应鹏 
	Date: 18/11/20 22:40
	Description: 
*/

#include<iostream>
#include "main.h"
using namespace std;
int main() {
	//创建三个对象 
	Mouse mouse;
	Keyboard keyboard;
	Computer computer;
	computer.powerOn(mouse);//把鼠标对象传给powerOn()方法 实现鼠标的打开
	computer.powerOn(keyboard);//把键盘的对象传给powerOn()方法 实现键盘的打开 
	cout <<"电脑开机成功！"<< endl;
	cout<<"-------------------------"<<endl;
	computer.powerOff(mouse) ;//把鼠标对象传给powerOff()方法 实现鼠标的关闭 
	computer.powerOff(keyboard) ;//把键盘的对象传给powerOff()方法 实现键盘的关闭 
	cout <<"电脑关机成功！" << endl; 
	system("pause");
	return 0;
}
