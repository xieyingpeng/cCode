#include <iostream>
using namespace std;
int main(){
	double income =0 ;//定义收入的变量 
	double pay =0;//支付党费变量 
	cout <<"请输入你的月收入：" <<endl;
	cin >> income; 
	if(income==0){//当收入为0 的情况 
		pay =0.2*3;//一个季度为3 个月所以乘3 
		cout <<"你该季度应该缴纳:" <<pay <<"元" <<endl; 
	} 
	else if(income > 10000){//当收入大于10000元 的情况
		pay = income *0.02*3;
		cout <<"你该季度应该缴纳:" <<pay <<"元" <<endl; 
		
	} 
	else if (income >5000 && income <=10000){//当收入在5000-10000之间的情况
		pay = income*0.015*3;
		cout <<"你该季度应该缴纳:" <<pay <<"元" <<endl;  
	}
	else if (income >3000 && income <= 5000){//当收入在3000-5000之间 的情况
		pay = income*0.01*3;
		cout <<"你该季度应该缴纳:" <<pay <<"元" <<endl;
	}
	else if(income > 0 && income <=3000){//当收入在0-3000之间的情况
		pay = income *0.005*3;
		cout <<"你该季度应该缴纳:" <<pay <<"元" <<endl;
	}
	else{
		cout <<"输入错误！" << endl;
	}
}
