#include<iostream>
using namespace std;
int main(){
	int score = 0;//定义排位分数变量
	cout <<"请输入排位分数：" << endl;
	cin >> score;
	if(score>27000){
		cout <<"王者" << endl;
	} 
	else if(score>=22500 && score<27000){
		cout <<"星钻" << endl;
	}
	else if(score>=18000 && score<22500){
		cout <<"钻石" << endl;
	}
	else if(score>=13500 && score<18000){
		cout <<"铂金" << endl;
	}
	else if(score>=9000 && score<13500){
		cout <<"黄金" << endl;
	}
	else if(score>=4500 && score<9000){
		cout <<"白银" << endl;
	}
	else if(score>=0 && score<4500){
		cout <<"青铜" << endl;
	}
	else{
		cout <<"输入错误！" << endl; 
	}
}
