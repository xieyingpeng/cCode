/*
	Name: 
	Copyright: 
	Author:谢应鹏 
	Date: 23/12/20 09:40
	Description: v.insert(pos,elem)在Pop位置插入元素elem，返回新的数据位置
	v.insert(pos, n ,elem)在Pop位置插入n个elem元素，无返回值
	v.insert（pos,begin , end)在Pos 位置插入[begin,end]区间的数据，无返回值
	v.erase(pos)移除Pos位置上的元素，返回下一个数据的位置
	v.erase(begin ,end)移除[begin ,end]区间的数据，返回下一个数据的位置 
*/

#include <iostream> 
#include <vector>
using namespace std ;
int main(){
	vector <char> v ;
	v.insert(v.begin(), 'a'); //在头部插入第一个元素 
	v.insert(v.begin(), 'b');//在头部插入第二个元素
	v.insert(v.begin(), 'c');//在头部插入第三个元素
	v.insert(v.begin()+1 , 5 ,'t');//在begin()+1（第二个位置）位置插入5个t 
	for (int i =  0 ; i < 8 ; i++){
		cout << v[i]  << " " ;//输出容器中的元素 
	}
	cout << endl;
	cout <<"删除之后的元素：" << endl;
	v.erase(v.begin()+1 ,v.begin()+6);//删除第二个到第7个之间的元素 
	for (int i = 0 ; i < 3 ; i++){
		cout << v[i] << " ";//输出v中最后剩下的元素 
	}
	cout << endl;
	system("pause");
	return 0 ;
}
