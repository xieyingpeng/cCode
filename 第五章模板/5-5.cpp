#include<iostream>
using namespace std;
template <typename T >
class Array{
	private:
		int size;
		T *ptr;
	public:
		Array(T arr[] , int s);
		void show();
		
}; 
template <typename T>
Array <T> ::Array (T arr[] , int s){
	ptr = new T[s];
	size = s;
	for (int i = 0 ; i < size ; i++){
		ptr[i] = arr[i];
	}
}
template <typename T >
void Array<T>::show(){
	for ( int i = 0 ; i< size ; i++){
		cout << * (ptr+i) <<" " ;
		cout << endl;
	}
	 
}
int main(){
	 char cArr[] ={ 'a' , 'b', ' c ' , 'd' ,'e'};
	 Array<char> a1(cArr , 5);
	 a1.show();
	 int iArr[10] = { 1,2,5,4,5,6,6};
	 Array<inte > a2(iArr  , 10);
	 a2.show();
	 system("pause");
	 return 0 ;
}
