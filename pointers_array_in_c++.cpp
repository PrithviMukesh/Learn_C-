#include <iostream>
using namespace std;

int main() {
    float a[5];
    float *ptr;
    ptr = a;
    
// Inserting data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> *(ptr+i);
    }
    
// Displaying data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *ptr+i << endl ;
    }

    return 0;
}
