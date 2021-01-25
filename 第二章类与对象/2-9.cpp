#include<iostream>
using namespace std;
class Date {
	public:
		Date(int y , int m ,int d);
		void show();
	private:
		int m_nYear, m_nMonth, m_nDay;
		
};
Date::Date(int y, int m,int d){
	cout <<"Date constructor!" <<endl;
	m_nYear = y ;
	m_nMonth = m ;
	m_nDay = d;
}
void Date::show(){
	cout<<m_nYear <<"-" <<m_nMonth <<"-" <<m_nDay<< endl;
}
class Student{
	public:
		Student(string con_name, int con_id , int y ,int m ,int d);
		void disp_msg();
	private:
		Date m_iBrithday;
		string m_gName;
		int m_nID;
};
Student::Student(string con_name ,int con_id,int y ,int m ,int d):m_iBrithday(y,m,d){
	cout<<"Student constructor!" <<endl;
	m_gName = con_name;
	m_nID =con_id;
	
	
}
void Student::disp_msg(){
	cout <<"std name:" << m_gName << ", id=" << m_nID <<", birthday:";
	m_iBrithday.show();
}
int main(){
	Student student ("xiaoming" , 1, 1999,10, 25);
	student.disp_msg();
	system("pause");
	return 0;
}

