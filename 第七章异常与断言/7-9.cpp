#include <iostream>
using namespace std;
template <typename T>
class Student{
	private:
		int id;
		double score ;
	public:
		friend ostream& operator<< (ostream& os ,const Student& st);
		friend istream& operator>> (istream& is , Student& st);
		friend double operator- (const Student& st1, const Student& st2);
}; 
ostream& operator<< (ostream& os , const Student& st){
	os << "id:" << st.id << "socre:" << st.score << endl;
	return os;
} 
istream& operator>> (istream& is ,Student& st){
	is >> st.id >> st.score ;
	return is;
}
double operator- (const Student& st1 ,const Student& st2){
	return st1.score-st2.score;
}
int main(){
	Student s1 ,s2;
	cout << "����������ͬѧ��id �ͳɼ���";
	cin >> s1 >> s2;
	cout <<"�����ɼ��Ĳ�Ϊ��" << s1-s2 << endl;
	system("pause");
	return 0 ;
}
