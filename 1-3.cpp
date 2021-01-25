#include<iostream>
#include<string>
using namespace std;
void add(int x=1, int y=3, int z=5);//函数声明中有两个默认参数 
void swap(int &a, int &b)//定义了一个交换函数 
	{
		int t=a;
		a=b;
		b=t;
	}
void add(int x,int y, int z)//定义一个 求和函数 
{
	cout << "求和的结果为：" <<  x+y+z << endl;
}
inline add1()
{
	cout<< " 这是一个内联函数" << endl;
}
class Car//定义了一个车类 
{
	public:
		void welcome();//成员函数 
		int get_wheels();
		void set_wheels(int); 
	private:
		 int n_wheels;//数据成员 

};
 void Car:: welcome()
	{
		cout << " 欢迎光临" << endl; 
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
	cout << "请输入两个数：" << endl;
	cin >> a >> b ;
	cout << "交换之后的数字：" << endl;
	swap(a,b);
	//int a=20;
	//int &b=a;//引用 
	cout<<"b="<<b<<  "  "<<"a=" << a<<endl;
	string s="hello,iworld";
	string s1="xie";
	string s2="ying peng ";
	cout<<"交换之前：" << endl;
	cout<< "s1:" <<s1<<endl<<"s2:"<< s2<< endl;
	cout << "交换之后:" << endl;
	s1.swap(s2);//通过swap()函数进行两个字符串的交换 
	cout<< "s1:" <<s1<<endl<<"s2:"<< s2<< endl;

	cout<< "length:"<<s.length()<< endl; //通过length()函数求字符串的长度 
	cout << "size:"<< s.size() << endl;
	int *p1= new int (10);//用new生成一个Int 类型p1 初始值为10 
	cout<< "*p1=" << *p1 << endl; 
	*p1= 20;//改变*p1 的值 
	cout<< "*p1=" << *p1 << endl;
	char *pc = new char[10];//用new 生成一个char 类型pc 数组 大小为10 
	for( int i= 0; i< 10 ; i++)//为数组存入赋值 
	{
		pc[i]= i+65;
	}
	for ( int  i=0 ; i< 10 ;i++)//输出数组值 
	cout << pc[i] << " " ;
	cout << endl;
	delete p1;
	delete  []pc;//通过关键字delete 释放空间 
	add(1);//函数调用传入一个参数，y z 不变 
	add(1,4);//传入两个参数 z 不变 
	add(3,6,8);//传入三个参数 
	add1();//内联函数调用 
	Car mycar;//定义类对象 
	mycar.welcome();//访问成员函数 
	mycar.set_wheels(4);
	cout << "这驾车的轮子有：" << mycar.get_wheels(	) << endl;
	system("pause");
	return 0;
	 
} 
