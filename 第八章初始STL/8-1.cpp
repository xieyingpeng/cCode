
/*
	Name: vector��ģ�� 
	Copyright: 
	Author: лӦ�� 
	Date: 23/12/20 09:26
	Description: 
	vector��ģ����push_back()���� �����������Ԫ�� 
	pop_back() �������������һ��Ԫ�� 
	front()��back()������ʹ�� 
*/
 
#include <iostream>
#include <vector>
using namespace std ;
int main(){
	vector<int> v ;//����һ���յ�vector���� 
	for (int i = 0 ; i < 10 ; i++){
		v.push_back(i+1);//��Ԫ����ӵ�v�� 
	}
	for (int i = 0 ; i < 10 ; i++){
		cout << v[i] << " " ;//���Ԫ�� 
	}
	cout << endl;
	v.pop_back();//�Ƴ�ĩβ��Ԫ�� 
	for(int i = 0 ; i < 9 ; i++){//��ʱv�����Ԫ��ֻ��9�� 
		cout << v[i] << "  " ;
	}
	cout << endl;
	cout << v.front() << endl;//��ȡ��һ��Ԫ�� 
	cout << v.back() << endl;//��ȡ���һ��Ԫ�� 
 	system("pause");
	return 0 ;
} 
