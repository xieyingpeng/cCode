#include<iostream>
using namespace std;
class Box{
	private:
		double length;
		double width;
		double height;
	public:
		double getVolume(){
			return length*width*height;
		}
		void setLength(double length){
			this->length = length;
		}
		void setWidth(double width){
			this->width = width;
		}
		void setHeight(double height){
			this->height = height;
		}
		Box operator+(const Box a){
			Box box;
			box.length =this->length+a.length;
			box.width = this->width +a.width;
			box.height = this->height+a.height;
			return box;
		}
		Box operator -(const Box b){
			Box box;
			box.length = this->length -b.length;
			box.width = this->width -b.width;
			box.height = this->height - b.height;
			return box;
		}
		void show (const Box box1,Box box2){
			cout << "相加后的长："<< box1.length+box2.length<< endl;
			cout << "相加后的宽："<< box1.width+box2.width<< endl;
			cout << "相加后的高："<< box1.height+box2.height<< endl;
			
		}
	void print (const Box box1,Box box2){
			cout << "相加后的长："<< box1.length-box2.length<< endl;
			cout << "相加后的宽："<< box1.width-box2.width<< endl;
			cout << "相加后的高："<< box1.height-box2.height<< endl;
			
		}
};
int main(){
	Box box1 ;
	box1.setLength(5);
	box1.setWidth(5);
	box1.setHeight(5);
	std::cout << "第一个图形的面积:" << box1.getVolume() << std::endl;
	Box box2 ;
	box2.setLength(5);
	box2.setWidth(5);
	box2.setHeight(2);
	std::cout << "第二个图形的面积:" << box2.getVolume() << std::endl;
	Box v1;
	v1= box1+box2;
	v1.show(box1,box2);
	std::cout << "两个对象相加后的面积:"<< v1.getVolume()<<std::endl;
	Box v2;
	v2.print(box1,box2);
	v2 = box1-box2;
	std::cout << "两个对象相减后的面积："<<v2.getVolume()<<std::endl;
	system("pause");
	return 0 ;
}
