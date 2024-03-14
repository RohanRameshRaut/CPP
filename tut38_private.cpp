#include <iostream>
using namespace std;

class Base
{
    int data1; // Private by default and is not inheritable.
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1(void)
{
    return data1;
}

int Base ::getData2(void)
{
    return data2;
}

class Derived : private Base
{ // Class is being derived privately
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is: " << getData1() << endl; // Since data1 is a private member of Base class so, we can not acces it directly.
    cout << "Value of data 2 is: " << data2 << endl;      // Public member of Base class
    cout << "Value of data 3 is: " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setData(); // we can not call setData with object of Derived class, since visibility of Derived class is private and public members and member functions of Base class becomes private in Derived class.
    der.process();
    der.display();

    return 0;
}