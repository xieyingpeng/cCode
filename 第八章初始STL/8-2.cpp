/*
	Name: 
	Copyright: 
	Author:лӦ�� 
	Date: 23/12/20 09:40
	Description: v.insert(pos,elem)��Popλ�ò���Ԫ��elem�������µ�����λ��
	v.insert(pos, n ,elem)��Popλ�ò���n��elemԪ�أ��޷���ֵ
	v.insert��pos,begin , end)��Pos λ�ò���[begin,end]��������ݣ��޷���ֵ
	v.erase(pos)�Ƴ�Posλ���ϵ�Ԫ�أ�������һ�����ݵ�λ��
	v.erase(begin ,end)�Ƴ�[begin ,end]��������ݣ�������һ�����ݵ�λ�� 
*/

#include <iostream> 
#include <vector>
using namespace std ;
int main(){
	vector <char> v ;
	v.insert(v.begin(), 'a'); //��ͷ�������һ��Ԫ�� 
	v.insert(v.begin(), 'b');//��ͷ������ڶ���Ԫ��
	v.insert(v.begin(), 'c');//��ͷ�����������Ԫ��
	v.insert(v.begin()+1 , 5 ,'t');//��begin()+1���ڶ���λ�ã�λ�ò���5��t 
	for (int i =  0 ; i < 8 ; i++){
		cout << v[i]  << " " ;//��������е�Ԫ�� 
	}
	cout << endl;
	cout <<"ɾ��֮���Ԫ�أ�" << endl;
	v.erase(v.begin()+1 ,v.begin()+6);//ɾ���ڶ�������7��֮���Ԫ�� 
	for (int i = 0 ; i < 3 ; i++){
		cout << v[i] << " ";//���v�����ʣ�µ�Ԫ�� 
	}
	cout << endl;
	system("pause");
	return 0 ;
}
