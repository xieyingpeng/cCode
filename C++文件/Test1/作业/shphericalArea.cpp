#include<iostream>
using namespace std;
int main(){
	int radius1;
	int radius2;
	int radius3;//定义三个正整数半径 
	double area1 = 0;//定义第一个球的面积变量 
	double area2 = 0;//定义第二个球的面积变量 
	double area3 = 0;//定义第三个球的面积变量 
	cout << "请输入第一个球的半径："<< endl;
	cin>> radius1;
	area1 = 4*3.14*radius1*radius1;//求的球面积 
	cout << "请输入第二个球的半径："<< endl;
	cin>> radius2;
	area2 = 4*3.14*radius2*radius2;
	cout << "请输入第三个球的半径："<< endl;
	cin>> radius3;
	area3 = 4*3.14*radius3*radius3;
	/*条件表达式(是一个三目运算)来求三个值中最大值
	具体用法如下：
		表达式1 ？表达式2：表达式3；
		先计算表达式1 的值 如果为真则将表达式2的值作为结果，
		否则将表达式3 的值作为结果 
	
	*/ 
	double temp = (area1 >area2 )?area1:area2;//条件表达式 
	//其中（area1>area2)就是表达式1 ，area1表达式2， area2表达式3 
	double AreaMax = (temp >area3 )? temp:area3;
	cout <<"最大球的面积为：" << AreaMax <<endl;
	
}

