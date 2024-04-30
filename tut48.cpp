#include <iostream>
using namespace std;

/* constructor in derived class in c++.
Case1:
According to the defined catagory of a constructor it will execute.
class B: public A{
    // Order fo execution of constructor --> First A() then B()
};

Case2:
class A: public B, public C{
    // Order fo execution of constructor --> First B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order fo execution of constructor --> First virtual public C() then B() and A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{ // This order matters for constructor invokeing. ex: Base2-->Base1-->Derived(constructors)
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    { // Not this.
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printData(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};

int main()
{

    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printData();

    return 0;
}
