#include <iostream>
#include <string>
using namespace std;
class Car//����һ��car�� 
{
	public:
		Car(string carname, int n)//��������������Ĺ��캯�� 
		{
			cout << "��ӭ���������磡" << endl;
			car_name = carname;
			m = n;
		}
		Car(string carname)//�����һ�������Ĺ��캯�� 
		{
			cout << "��ӭ�㣡" << endl;
			car_name = carname;
		}
		void speak()//����һ������ 
		{
			cout << "���������ǣ�" << car_name << endl;
			cout << " ������������" << m << endl;
		}
	private:
		string car_name;
		int m;
};
int main()
{
	Car mycar ("baoma" , 4);//���ô����������Ĺ��캯���������� 
	
	Car toucar ("beichi");//���ô�һ�������Ĺ��캯���������� 
	mycar.speak ();//����speak()����
	toucar.speak () ;
	system("pause") ;
	
	return 0;
}
 
