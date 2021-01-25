#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <time.h>
using namespace std;
class Date{
	public:
		int get_Year();
		void set_Year();
		int get_Month();
		void set_Month();
		int get_Day();
		void set_Day();
		int get_Weeks();
		void set_Weeks();
	
	private:
		int year;//年 
		int month;//月 
		int day;//日 
		int weeks;//星期 
}; 
class Time{
	public:
		
		int get_Hours();
		void set_Hours();
		int get_Minutes();
		void set_Minutes();
		int get_Sceonds();
		void set_Sceonds();
	private:
		int hours;//时 
		int minutes;//分 
		int sceonds;//秒 
};
#endif 
