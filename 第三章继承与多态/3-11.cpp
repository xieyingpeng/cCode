#include<iostream>
using namespace std;
class Bird{
	public:
		void fly_sky(){
			cout <<"bird fly in sky!" << endl;
			 
		}
		void breath(){
			cout <<"bird breath!" <<endl;
		}
};
class Fish{
	public:
		void swim_in_water(){
			cout <<"fish swim in water!" <<endl;
		}
		void breath(){
			cout <<"fish breath!"<< endl;
			
		}
};
class  WaterBird:public Bird,public Fish{
	public:
		void fly_swim(){
			cout << "waterbird can fly and swim !"<< endl;
		}
};
int main(){
	WaterBird waterbird;
	waterbird.fly_sky();
	waterbird.swim_in_water();
	system("pause");
	return 0;
}
 
