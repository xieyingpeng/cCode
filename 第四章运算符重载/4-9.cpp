#include <iostream>
#include <string>
using namespace std ;
class Student {
	private :
		int number;
		double score;
	public:
		void show() const;
		friend ostream& operator<< (ostream& os , const Student st);
		friend istream& operator>> (istream& is, Student& st);
		friend int opreator+ (const Student& st1,const Student& st2);
		
};
void Student::show () const{
	cout << "两名学生Id和成绩为：" << number <<" " << score << endl;
}
ostream& operator<< (ostream& os, const Student& st){
	os << "学生的Id：" << st.number << "  成绩:"<< st.score << endl;
	return os;
}
istream& operator>> (istream& is, Student& st){
	is >>st.number >> st.score ;
	return is;
}
//Student operator+ (const Student& st1,const Student& st2){
//	return st1.score+st2.score;
	
//}
int main(){
	Student st1 ,st2;
	cout <<"请输入两名学生的Id和成绩：" << endl;
	cin >> st1 >> st2 ;
	//cout << "两名学生的成绩总和为：" << st1+st2 << endl;
	st1.show();
	st2.show();
	system("pause");
	return 0 ;
}
