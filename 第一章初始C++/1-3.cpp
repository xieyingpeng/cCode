#include<iostream>
#include<string>
using namespace std;
void add(int x=1, int y=3, int z=5);//����������������Ĭ�ϲ��� 
void swap(int &a, int &b)//������һ���������� 
	{
		int t=a;
		a=b;
		b=t;
	}
void add(int x,int y, int z)//����һ�� ��ͺ��� 
{
	cout << "��͵Ľ��Ϊ��" <<  x+y+z << endl;
}
inline add1()
{
	cout<< " ����һ����������" << endl;
}
class Car//������һ������ 
{
	public:
		void welcome();//��Ա���� 
		int get_wheels();
		void set_wheels(int); 
	private:
		 int n_wheels;//���ݳ�Ա 

};
 void Car:: welcome()
	{
		cout << " ��ӭ����" << endl; 
	}
int Car:: get_wheels()
	{
		return n_wheels;
	}
void Car::set_wheels(int n)
	{
		n_wheels=n;
	}
int main(){;
	
	int a,b;
	cout << "��������������" << endl;
	cin >> a >> b ;
	cout << "����֮������֣�" << endl;
	swap(a,b);
	//int a=20;
	//int &b=a;//���� 
	cout<<"b="<<b<<  "  "<<"a=" << a<<endl;
	string s="hello,iworld";
	string s1="xie";
	string s2="ying peng ";
	cout<<"����֮ǰ��" << endl;
	cout<< "s1:" <<s1<<endl<<"s2:"<< s2<< endl;
	cout << "����֮��:" << endl;
	s1.swap(s2);//ͨ��swap()�������������ַ����Ľ��� 
	cout<< "s1:" <<s1<<endl<<"s2:"<< s2<< endl;

	cout<< "length:"<<s.length()<< endl; //ͨ��length()�������ַ����ĳ��� 
	cout << "size:"<< s.size() << endl;
	int *p1= new int (10);//��new����һ��Int ����p1 ��ʼֵΪ10 
	cout<< "*p1=" << *p1 << endl; 
	*p1= 20;//�ı�*p1 ��ֵ 
	cout<< "*p1=" << *p1 << endl;
	char *pc = new char[10];//��new ����һ��char ����pc ���� ��СΪ10 
	for( int i= 0; i< 10 ; i++)//Ϊ������븳ֵ 
	{
		pc[i]= i+65;
	}
	for ( int  i=0 ; i< 10 ;i++)//�������ֵ 
	cout << pc[i] << " " ;
	cout << endl;
	delete p1;
	delete  []pc;//ͨ���ؼ���delete �ͷſռ� 
	add(1);//�������ô���һ��������y z ���� 
	add(1,4);//������������ z ���� 
	add(3,6,8);//������������ 
	add1();//������������ 
	Car mycar;//��������� 
	mycar.welcome();//���ʳ�Ա���� 
	mycar.set_wheels(4);
	cout << "��ݳ��������У�" << mycar.get_wheels(	) << endl;
	system("pause");
	return 0;
	 
} 
