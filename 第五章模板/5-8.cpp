#include<iostream>
using namespace std ;
template <typename T > 
class A{
	private:
		T item;
	public:
		A(const T& t):item(t){
		}
		template <typename V ,typename U>
		friend void show(V &v, U &u);
		template <typename M,typename N ,typename O >
		friend void show(M &m , N & n ,O &o);

		
}; 
template <typename V , typename U>
void show(V &v , U &u){
	cout << v.item <<" ,"<<u.item << endl;
}
template <typename M ,typename N , typename O>
void show(M &m , N & n ,O &o){
	cout << m.item << " ,"<<n.item << ","<< o.item << endl;
}
int main(){
	A <int> a (10);
	A <double> b (1.3);
	A <int> c (38);
	A <char> d('a');
	A <char> e('b');
	cout << "d :e:" <<endl;
	show(d,e);
	cout << "a:" <<"b:";
	show(a,b);
	cout << "a:" <<" "<<"b:" <<" "<<"c:";
	show(a,b,c);
	system("pause");
	return 0 ;
}
