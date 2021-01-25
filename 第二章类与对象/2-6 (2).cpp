#include <iostream>
#include <string>
using namespace std;
class Car//定义一个car类 
{
	public:
		Car(string carname, int n)//定义带两个参数的构造函数 
		{
			cout << "欢迎来到车世界！" << endl;
			car_name = carname;
			m = n;
		}
		Car(string carname)//定义带一个参数的构造函数 
		{
			cout << "欢迎你！" << endl;
			car_name = carname;
		}
		void speak()//定义一个函数 
		{
			cout << "车的名字是：" << car_name << endl;
			cout << " 车的轮子数：" << m << endl;
		}
	private:
		string car_name;
		int m;
};
int main()
{
	Car mycar ("baoma" , 4);//调用带两个参数的构造函数创建对象 
	
	Car toucar ("beichi");//调用带一个参数的构造函数创建对象 
	mycar.speak ();//调用speak()函数
	toucar.speak () ;
	system("pause") ;
	
	return 0;
}
 
