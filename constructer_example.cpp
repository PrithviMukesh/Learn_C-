/*Source Code to demonstrate the working of constructor in C++ Programming */
/* This program calculates the area of a rectangle and  displays it. */ 
#include <iostream>
using namespace std;
class Area
{
    private:
       int length;
       int breadth;

    public:
       Area(): length(5), breadth(2){ 
	   cout<<"\nThe program strted successfully\n" ;
	   }   /* Constructor */
       void GetLength()
       {
           cout<<"Enter length and breadth respectively: ";
           cin>>length>>breadth;
       }
       int AreaCalculation() {  return (length*breadth);  }
       void DisplayArea(int temp)
       {
           cout<<"Area: "<<temp;
       }
};
int main()
{
    Area A1;
    int temp;
    A1.GetLength();
    temp=A1.AreaCalculation();
    A1.DisplayArea(temp);
    Area A2;
    cout<<endl<<"Default Area when value is not taken from user"<<endl;
    temp=A2.AreaCalculation();
    A2.DisplayArea(temp);
    return 0;
}

