#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date {
public:
	Date(int y, int m, int d);
	Date(Date& con_date);
private:
	int m_nYear;
	int m_nMonth;
	int m_nDay;
};
Date::Date(int y, int m, int d) {
	cout << "Date construcotr!" << endl;
	m_nYear = y;
	m_nMonth = m;
	m_nDay = d;
}
Date::Date(Date& con_date) {
	m_nYear = con_date.m_nYear;
	m_nMonth = con_date.m_nMonth;
	m_nDay = con_date.m_nDay;
}
class Student {
public:
	static int a_nTotalNum;
	Student(char* con_name, int con_id, Date &con_birthday);
	~Student();
private:
	char m_gName[20];
	int m_nID;
	Date m_iBirthday;
};
Student::Student(string con_name, int con_id, Date& con_birthday) :m_iBirthday(con_birthday) {
	string m_gName = con_name;
	m_nID = con_id;
	a_nTotalNum++;

}
Student::~Student() {
	a_nTotalNum--;
	cout << "desstructor. totalnum =" << a_nTotalNum << endl;
	if (a_nTotalNum == 0) {
		system("pause");
	}
}int Student::a_nTotalNum = 0;
int main() {
	Date tombirthday(1999, 12, 28);
	Student std_tom("tom", 1 ,tombirthday);
	cout << "Tom, the totalnum" = << std_tom.a_nTotalNum << endl;
	Date paulbirthday(1998, 4, 13);
	Student std_paul("paul", 2, tombirthday);
	cout << "paul, tje totalnum=" << std_paul.a_nTotalNum << endl;
	return 0;
}

