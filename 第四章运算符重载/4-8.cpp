//����ת������ 
#include<iostream>
using namespace std ;
class  Swap{
	private :
		int a , b ;
	public :
		Swap(int m , int n):a(m) , b(n){
			
		}
		operator char(){
			return static_cast <char>(a) ;
			
		}
		void show(){
			cout <<"a:" <<a <<" " <<"b :" << b << endl;
		}
		
};
int main(){
	Swap s1(65,5);
	cout <<"s1:";
	s1.show();
	char ch = s1;
	cout << ch <<endl;
	system("pause");
	return 0;
	
}
