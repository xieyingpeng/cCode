#include <iostream>
using namespace std;
int main(){
	double income =0 ;//��������ı��� 
	double pay =0;//֧�����ѱ��� 
	cout <<"��������������룺" <<endl;
	cin >> income; 
	if(income==0){//������Ϊ0 ����� 
		pay =0.2*3;//һ������Ϊ3 �������Գ�3 
		cout <<"��ü���Ӧ�ý���:" <<pay <<"Ԫ" <<endl; 
	} 
	else if(income > 10000){//���������10000Ԫ �����
		pay = income *0.02*3;
		cout <<"��ü���Ӧ�ý���:" <<pay <<"Ԫ" <<endl; 
		
	} 
	else if (income >5000 && income <=10000){//��������5000-10000֮������
		pay = income*0.015*3;
		cout <<"��ü���Ӧ�ý���:" <<pay <<"Ԫ" <<endl;  
	}
	else if (income >3000 && income <= 5000){//��������3000-5000֮�� �����
		pay = income*0.01*3;
		cout <<"��ü���Ӧ�ý���:" <<pay <<"Ԫ" <<endl;
	}
	else if(income > 0 && income <=3000){//��������0-3000֮������
		pay = income *0.005*3;
		cout <<"��ü���Ӧ�ý���:" <<pay <<"Ԫ" <<endl;
	}
	else{
		cout <<"�������" << endl;
	}
}
