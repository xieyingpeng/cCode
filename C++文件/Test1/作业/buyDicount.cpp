#include<iostream>
using namespace std;
int main(){
	double kilogram = 0;//���幺������ ����
	double pay = 0;//����֧���Ľ����� ���ҳ�ʼ��Ϊ0 
	cout <<"�����빺���������"<< endl;
	cin >> kilogram ;
	if(kilogram >=5){
		pay = kilogram*6.5*0.8;//���д��۵ļ��� 
		cout << "��Ӧ��֧����" <<pay << "Ԫ" <<endl;
	}
	else{
		pay = kilogram*6.5;//�����۵ļ��� 
		cout << "��Ӧ��֧����" <<pay << "Ԫ" <<endl;
	}
} 
