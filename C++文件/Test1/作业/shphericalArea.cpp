#include<iostream>
using namespace std;
int main(){
	int radius1;
	int radius2;
	int radius3;//���������������뾶 
	double area1 = 0;//�����һ������������ 
	double area2 = 0;//����ڶ������������� 
	double area3 = 0;//������������������� 
	cout << "�������һ����İ뾶��"<< endl;
	cin>> radius1;
	area1 = 4*3.14*radius1*radius1;//�������� 
	cout << "������ڶ�����İ뾶��"<< endl;
	cin>> radius2;
	area2 = 4*3.14*radius2*radius2;
	cout << "�������������İ뾶��"<< endl;
	cin>> radius3;
	area3 = 4*3.14*radius3*radius3;
	/*�������ʽ(��һ����Ŀ����)��������ֵ�����ֵ
	�����÷����£�
		���ʽ1 �����ʽ2�����ʽ3��
		�ȼ�����ʽ1 ��ֵ ���Ϊ���򽫱��ʽ2��ֵ��Ϊ�����
		���򽫱��ʽ3 ��ֵ��Ϊ��� 
	
	*/ 
	double temp = (area1 >area2 )?area1:area2;//�������ʽ 
	//���У�area1>area2)���Ǳ��ʽ1 ��area1���ʽ2�� area2���ʽ3 
	double AreaMax = (temp >area3 )? temp:area3;
	cout <<"���������Ϊ��" << AreaMax <<endl;
	
}

