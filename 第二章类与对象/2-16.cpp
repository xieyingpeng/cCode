#include<iostream>
using namespace std;
class Date{
	public:
		Date(int y , int m ,int d);
		Date(Date &con_date);
	private:
		int m_nYear , m_nMonth , m_nDay;
		
};
Date::Date(int y , int m ,int d){
	cout <<"Date constructor !" <<endl;
	m_nYear = y  ;
	m_nMonth = m ;
	m_nDay = d ;
	
	
}
Date::Date(Date &con_date){
	m_nYear = con_date.m_nYear;
	m_nMonth = con_date.m_nMonth ;
	m_nDay = con_date.m_nDay;
}
class Studt{
	public:
		static int s_nTotalNum;
		Student(string con_name , int con_id , Date &con_birthday);
		~Student();
	private:
		string m_gName;
		int m_nID;
		Date m_iBirthday;		
};
Student::Student(string con_name ,int con_id , Date &con_birthday ):m_iBirthday(con_birthday){
	m_gName = con_name;
	m_nID = con_id;
	s_nTotalNum++;
	
}
Student::~Student(){
	s_nTotalNum--;
	cout <<"destructor , totalnum =" <<s_nTotalNum <<endl;
	if(s_nTotalNum == 0){
		system("pause");
	}
} 
int Student::s_nTotalNum = 0;
int main(){
	Date tombirthday (1998 , 5 , 20 );
	Student std_tom("Tom " , 1 , tombirthday);
	cout <<" Tom, the totalnum =" << std_tom.s_nTotalNum <<endl;
	Date paulbirthday(1888,36,7);
	Student std_paul("paul " , 2  , tombirthday);
	cout <<"Paul , the totalnum = " <<std_paul.s_nTotalNum <<endl;
	return 0 ;
}

