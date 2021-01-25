#include <iostream>
using namespace std ;
class ZeroException {
	public:
		ZeroException():msg("div zero!"){
			
		}
		const char *getmsg() {
			return msg;
		}
	private:
		const char *msg;
};
int int_div (int a ,int b){
	if ( b == 0 ){
		throw ZeroException();
	}
	return a / b;
}
int main(){
	int a , b ;
	while (1){
		cout << "Please input two integers:" ;
		cin >> a >> b ;
		try {
			cout << "Maybe exception code :" << endl;
			cout << a << "/" << b << "=" << int_div(a ,b)  << endl;
			
		}
		catch(ZeroException d
		ivzero) {
			 cout << "excepiton :" << divzero.getmsg() << endl;
		}
	}
	system("pause");
	return 0 ;
}
