#pragma once
#ifndef MAIN_H
#define MAIN_H
#include<iostream>
#include <string>
using namespace std;
class Student {
public:
	Student(string con_name, int con_id);
	~Student();
	string get_stdname();
	static int get_totalnum();
	static int get_totalnum(Student& stdref);
private:
	static int s_nTotalNum;
	string m_strName;
	int m_nID;
};


#endif // !1

