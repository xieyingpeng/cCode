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
			cout << "��Ӻ�ĳ���"<< box1.length+box2.length<< endl;
			cout << "��Ӻ�Ŀ�"<< box1.width+box2.width<< endl;
			cout << "��Ӻ�ĸߣ�"<< box1.height+box2.height<< endl;
			
		}
	void print (const Box box1,Box box2){
			cout << "��Ӻ�ĳ���"<< box1.length-box2.length<< endl;
			cout << "��Ӻ�Ŀ�"<< box1.width-box2.width<< endl;
			cout << "��Ӻ�ĸߣ�"<< box1.height-box2.height<< endl;
			
		}
};
int main(){
	Box box1 ;
	box1.setLength(5);
	box1.setWidth(5);
	box1.setHeight(5);
	std::cout << "��һ��ͼ�ε����:" << box1.getVolume() << std::endl;
	Box box2 ;
	box2.setLength(5);
	box2.setWidth(5);
	box2.setHeight(2);
	std::cout << "�ڶ���ͼ�ε����:" << box2.getVolume() << std::endl;
	Box v1;
	v1= box1+box2;
	v1.show(box1,box2);
	std::cout << "����������Ӻ�����:"<< v1.getVolume()<<std::endl;
	Box v2;
	v2.print(box1,box2);
	v2 = box1-box2;
	std::cout << "�������������������"<<v2.getVolume()<<std::endl;
	system("pause");
	return 0 ;
}
