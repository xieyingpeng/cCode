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
		int year;//�� 
		int month;//�� 
		int day;//�� 
		int weeks;//���� 
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
		int hours;//ʱ 
		int minutes;//�� 
		int sceonds;//�� 
};
#endif 
