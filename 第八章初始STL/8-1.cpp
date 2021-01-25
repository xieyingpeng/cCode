
/*
	Name: vector类模板 
	Copyright: 
	Author: 谢应鹏 
	Date: 23/12/20 09:26
	Description: 
	vector类模板中push_back()函数 向容器中添加元素 
	pop_back() 弹出容器中最后一个元素 
	front()和back()函数的使用 
*/
 
#include <iostream>
#include <vector>
using namespace std ;
int main(){
	vector<int> v ;//创建一个空的vector对象 
	for (int i = 0 ; i < 10 ; i++){
		v.push_back(i+1);//将元素添加到v中 
	}
	for (int i = 0 ; i < 10 ; i++){
		cout << v[i] << " " ;//输出元素 
	}
	cout << endl;
	v.pop_back();//移除末尾的元素 
	for(int i = 0 ; i < 9 ; i++){//此时v里面的元素只有9个 
		cout << v[i] << "  " ;
	}
	cout << endl;
	cout << v.front() << endl;//获取第一个元素 
	cout << v.back() << endl;//获取最后一个元素 
 	system("pause");
	return 0 ;
} 
