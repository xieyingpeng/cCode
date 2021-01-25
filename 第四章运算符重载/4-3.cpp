#include<iostream>
using namespace std;
class Vec{
	private:
		double x ,y ,z;
	public:
		Vec(){
			
		}
		Vec(double a , double b , double c){
			
		}
		~Vec(){
			
		}
		void set(double a , double b , double c){
			x = a ;
			y = b;
			z = c;
		}
		void print(){
			cout <<"(" <<x <<"," <<y <<"," << y << "," <<z << ")" <<endl;
		}
		bool equal (const Vec &V){
			if((x==V.x)&&(y==V.y)&&(z==V.z)){
				return true;
				
			}
			return false;
		}
		Vec operator+(const Vec &v) const{
			Vec v1;
			v1.x = x+v.x;
			v1.y = y+v.y;
			v1.z = z+v.z;
			return v1;
		}
		Vec operator - (const Vec &v) const{
			Vec v1;
			v1.x= x-v.x;
			v1.y = y-v.y;
			v1.z = z-v.z;
			return v1;
		}
		Vec operator*(const Vec &v) const{
			return (Vec(x*v.x,y*v.y,z*v.z));
		}
		Vec operator/(const Vec &v) const{
			return (Vec(x/v.x,y/v.y,z/v.z));
		}
		Vec& operator++(){
			*this = *this+Vec(1,1,1) ;
			return *this;
		} 
		Vec& operator += (const Vec &v){
			*this = *this+v;
			return *this;
		} 
		friend bool operator ==(const Vec &v1, const Vec &v2){
			return ((v1.x == v2.x )&& (v1.y == v2.y)&&(v1.z==v2.z));
		}
		friend ostream& operator << (ostream& os , const Vec v){
			os <<"("<<v.x  << ", " << v.y << ", " <<v.z<< ")" <<endl;
			return os;
		}	
};
int main(){
	Vec v(1,1,1);
	Vec v1(-1,-1,0);
	v = v*v1;
	cout << v ;
	cout <<bool (v==v1);
	getchar();
	system("pause");
	return 0 ;
}
