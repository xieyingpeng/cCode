#include<iostream>
using namespace std;
int main(){
	int score = 0;//������λ��������
	cout <<"��������λ������" << endl;
	cin >> score;
	if(score>27000){
		cout <<"����" << endl;
	} 
	else if(score>=22500 && score<27000){
		cout <<"����" << endl;
	}
	else if(score>=18000 && score<22500){
		cout <<"��ʯ" << endl;
	}
	else if(score>=13500 && score<18000){
		cout <<"����" << endl;
	}
	else if(score>=9000 && score<13500){
		cout <<"�ƽ�" << endl;
	}
	else if(score>=4500 && score<9000){
		cout <<"����" << endl;
	}
	else if(score>=0 && score<4500){
		cout <<"��ͭ" << endl;
	}
	else{
		cout <<"�������" << endl; 
	}
}
