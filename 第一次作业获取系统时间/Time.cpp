/*
	Name: ��ȡϵͳʱ�� 
	Copyright: ��Ҫ���ÿ⺯��time.h 
	Author: лӦ�� 
	Date: 15/10/20 18:10
	Description: 20190521335
*/

#include <iostream>
#include "main.h"
#include <time.h>//����⺯���������ں�ʱ����صĺ����ͽṹ 
using namespace std;
int Time::get_Hours(){
	return hours;
}

void Time::set_Hours(){
	time_t now = time(0);//��ȡ��ǰϵͳʱ�� 
	struct tm systemtime;
	localtime_s(&systemtime, &now);

	hours = systemtime.tm_hour;
}
int Time::get_Minutes(){
	return minutes;
}
void Time::set_Minutes(){
	time_t now = time(0);//��ȡ��ǰϵͳʱ�� 
	struct tm systemtime;
	localtime_s(&systemtime, &now);
	minutes = systemtime.tm_min ;
}
int Time::get_Sceonds(){
	return sceonds;
}
void Time::set_Sceonds(){
	time_t now = time(0);//��ȡ��ǰϵͳʱ�� 
	struct tm systemtime;
	localtime_s(&systemtime, &now);
	sceonds = systemtime.tm_sec  ;
}
