/*
	Name: 获取系统当前时间 
	Copyright: 主要调用库函数time.h 
	Author: 谢应鹏 
	Date: 15/10/20 18:10
	Description: 20190521335
	
	time.h里面包含的结构体 
	结构体类型tm把日期和时间以C的结构的形式保存，
	tm结构的定义如下：
	struct tm{
		int tm_sec;//秒 正常范围从0到59  但允许到62
		int tm_min;//分
		int tm_hour;//小时
		int tm_mon;//月
		int tm_year;//年
		int tm_mday;//日 
		int tm_wday;//周 
*/

#include <iostream>
#include "main.h"//导入头文件  文件名是自己起的 形式为:xxx.h 
#include <time.h>  ////导入库函数里面日期和时间相关的函数和结构 
using namespace std;
int main(){
	Date date;//创建日期对象 
	Time times;//创建时间对象 
	date.set_Year( );
	date.set_Month();
	date.set_Day() ; 
	date.set_Weeks();
	times.set_Hours();
	times.set_Minutes();
	times.set_Sceonds();
	cout <<"	"<<"******************************************" << endl;
	//cout <<"		"<<"今天星期几？" << endl;
	cout << "		"<<"今天是星期  " << date.get_Weeks() << endl;
	//cout << "		"<<"今天的日期是？" << endl;
	cout << "		"<<"今天日期为："<<date.get_Year() <<" " <<"年 " << date.get_Month() <<" "<<"月 "<< date.get_Day()<<" " <<"日 " << endl;
	//cout << "		"<<"现在时间是？" << endl; 
	cout << "		"<<"当前时间是：" <<  times.get_Hours()<<" " <<"："<< times.get_Minutes()<<" " << "："<< times.get_Sceonds()<<" " <<endl;
	cout <<"	"<<"******************************************" << endl;
}
