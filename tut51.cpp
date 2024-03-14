#include <iostream>
using namespace std;

// pointers to objects and Arrow operator in c++;
class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // c1.setData(1, 54);
    // c1.getData();
    // Complex *ptr = &c1; // will work same as the above code reason for using this is, we can access the members of object using pointer variable.
    // (*ptr).setData(1, 54); // "()" brackets are must, cause "." operators presidence is higer than the "*" operator
    // (*ptr).getData();

    // Complex *ptr = new Complex; // created new object dynamically using new operator.
    // // (*ptr).setData(1, 54); is exactly same as
    // ptr->setData(1, 54); // (->) arrow operator dereferences the pointer varialbe i.e ptr and reffers the function of that object which ptr is pointing, here it is pointing to new Complex object then reffersing the function setData(1, 54) of that object.
    // // (*ptr).getData(); is as good as
    // ptr->getData();

    // *****Arry of Objects *************************
    Complex *ptr = new Complex[4]; // pointer variable ptr is pointing to array of 4 new objects
    ptr->setData(1, 4);
    ptr->getData();
    return 0;
}