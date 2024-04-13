#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1. Displying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displying Base class variable var_base" << var_base << endl;
        cout << "Displying Derived class variable var_derived" << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // To overcome the default behaviour of base_class_pointer(i.e no matter it will run its own functions and members)
    // virtual functions is introduced, just add virtual to the base class member functions prefix and it will allow the pointer to run the function of the derived class also.
    // It is a good example of runtime polymorphism.
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}