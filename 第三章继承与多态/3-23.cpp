#include<iostream>
using namespace std;
class Outer{
public:
	class Inner{
		private:
			int inner_n;
		public:
			void set_outer_n(Outer &ref_outer){
				ref_outer.outer_n=10;
			}
			void set_inner_n(){
				inner_n = 100;
			}
			void show(Outer &ref_outer){
				ref_outer.show();
				cout <<"inner_n = " << inner_n << endl;
			}
	};
	void show(){
		cout <<"outer_n = " << outer_n <<endl;
	}
private:
	int outer_n;
};
int main(){
	Outer outer_obj;
	Outer::Inner inner_obj;
	inner_obj.set_inner_n();
	inner_obj.set_outer_n(outer_obj);
	inner_obj.show(outer_obj);
	system("pause");
	return 0;
}
