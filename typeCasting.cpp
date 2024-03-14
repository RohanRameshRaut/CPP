#include<iostream>
using namespace std;

int main()
{
    int a = 65;
    int *p = &a;
    // Print Pointer Location and Value
    cout << "Location of pointer p is: " << p <<endl;
    cout << "Value of pointer p is: " << *p <<endl;
    
    char *c = (char*)&a;
    // Print Pointer Location and Value
    cout << "Location of pointer c is: " << c <<endl;
    cout << "Value of pointer c is: " << *c <<endl;


    return 0;
}