#include<iostream>
#include <cstring>
using namespace std;
class Date{
	public:
		Date(int y, int m, int d);//声明带参数的构造函数
		Date(Date &con_date);//声明拷贝构造函数
	private:
		int m_nYear;
		int m_nMonth;
		int m_nDay; 
};
Date::Date(int y ,int m ,int d){
	cout << "Date constructonr！" << endl;
	m_nYear = y;
	m_nMonth = m  ;
	m_nDay = d; 
}
Date::Date(Date &con_date){//定义Date类的拷贝构造函数 
	m_nYear = con_date.m_nYear;
	m_nMonth = con_date.m_nMonth;
	m_nDay = con_date.m_nDay;
}
class Student{
	public:
		static int s_nTotalNum;//定义静态数据成员
		Student(char *con_name , int con_id, Date &con_birthday) ;
		~Student();
	private:
		char m_gName[20];
		int m_nID;
		Date m_iBirthday;
};
Student::Student(char* con_name ,int con_id,Date &con_birthday):m_iBirthday (con_birthday)
{
	int namelen =strlen (con_name)+1;
	strcpy_s(m_gName, namelen, con_name);
	m_nID = con_id;
	s_nTotalNum++;
	
}
Student::~Student(){
	s_nTotalNum--;
	cout << "destructor, totalnum = "<< s_nTotalNum << endl;
	if ( s_nTotalNum == 0){
		System("pause");
	}
}
int Student::s_nTotalNum = 0;//静态数据的初始化
int main(){
	Date tombirthday(1998,5,20);
	Student std_tom ("Tom",1,tombrthday);
	cout << "Tom, the totalnum =" << std_tom.s_nTotalNum << endl;
	Date paulbirtday(1998,4,12);
	Student std_paul("paul",2,tombirthday);
	cout << "paul,the totalnum = " << std_paul.s_nTotalNum << endl;
	return 0;
} 
 
 
