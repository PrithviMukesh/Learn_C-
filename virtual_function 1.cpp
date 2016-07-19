//virtual functions 1
#include<iostream>
using namespace std;
class base_class{
	public:
		base_class(){
			cout<<"Constructor of base class : \n";
		}
		virtual void display(){
			cout<<"Content of base class : \n";//virtual not at all called
		}
};
class derived: public base_class{
	public:
		derived(){
			cout<<"Constructor of derived class : \n";
		}
		 void display(){
			cout<<"Content of derived class : \n";//virtual not at all called
		}
};
class derived2: public base_class{
	public:
		derived2(){
			cout<<"Constructor of derived2 class : \n";
		}
		 void display(){
			cout<<"Content of derived2 class : \n";//virtual not at all called
		}
};
int main()
{
	base_class *p;
	//p->display();
	derived d1;
	p = &d1;
	p->display();
	derived2 d2;
	p = &d2;
	p->display();
	return 0;
}
