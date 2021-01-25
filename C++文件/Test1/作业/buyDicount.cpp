#include<iostream>
using namespace std;
int main(){
	double kilogram = 0;//定义购买数量 变量
	double pay = 0;//定义支付的金额变量 并且初始化为0 
	cout <<"请输入购买的数量："<< endl;
	cin >> kilogram ;
	if(kilogram >=5){
		pay = kilogram*6.5*0.8;//进行打折的计算 
		cout << "你应该支付：" <<pay << "元" <<endl;
	}
	else{
		pay = kilogram*6.5;//不打折的计算 
		cout << "你应该支付：" <<pay << "元" <<endl;
	}
} 
