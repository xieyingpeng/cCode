/*
	Name: 获取系统时间 
	Copyright: 主要调用库函数time.h 
	Author: 谢应鹏 
	Date: 15/10/20 18:10
	Description: 20190521335
*/

#include <iostream>
#include "main.h"
#include <time.h>//导入库函数里面日期和时间相关的函数和结构 
using namespace std;
int Time::get_Hours(){
	return hours;
}

void Time::set_Hours(){
	time_t now = time(0);//获取当前系统时间 
	struct tm systemtime;
	localtime_s(&systemtime, &now);

	hours = systemtime.tm_hour;
}
int Time::get_Minutes(){
	return minutes;
}
void Time::set_Minutes(){
	time_t now = time(0);//获取当前系统时间 
	struct tm systemtime;
	localtime_s(&systemtime, &now);
	minutes = systemtime.tm_min ;
}
int Time::get_Sceonds(){
	return sceonds;
}
void Time::set_Sceonds(){
	time_t now = time(0);//获取当前系统时间 
	struct tm systemtime;
	localtime_s(&systemtime, &now);
	sceonds = systemtime.tm_sec  ;
}
