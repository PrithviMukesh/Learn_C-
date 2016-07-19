#include <iostream> 
using namespace std;

class Box
{
   public:
      // Constructor definition
      Box()
      {
         cout <<"Constructor called." << endl;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int value()
      {
      	return this->Volume();
	  }
      int compare(Box box)
      {
      	cout<<"\n"<<this->Volume();
      	cout<<"\n"<<box.Volume();
      	
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void)
{
   Box Box1(3.0,3.0,3.0);    // Declare box1
   Box Box2(8.0, 8.0, 8.0);    // Declare box2
   Box Box3(5.0,5.0,5.0);
   int volume = Box3.value();
   cout<<"volume is : "<<volume;
   int doubt = Box2.compare(Box1);
   //cout<<"\n"<<doubt;

   /*if(Box1.compare(Box2))
   {
      cout << "\nBox2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "\nBox2 is equal to or larger than Box1" <<endl;
   }*/
   return 0;
}
