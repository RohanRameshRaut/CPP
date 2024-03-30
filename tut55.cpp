#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void getDatax(int i)
    {
        var_base = i;
    }
    void displayx()
    {
        cout << "Base class variable " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void getDatay(int i)
    {
        var_derived = i;
    }
    void displayy()
    {
        cout << "Base class variable " << var_base << endl;
        cout << "Derived class variable " << var_derived << endl;
    }
};

int main()
{
    /*
    Do you know :
        MyClass obj;
        obj.memberVariable = value; // Directly initializing the member variable
        1) Direct Initialization: If the member variables are public or if you have provided public setter methods, you can directly assign values to them from the main() function or any other part of your code.
        2) Using Constructor: you know it!
    */
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class.

    // obj_base.var_base = 34; // direct initialization.
    base_class_pointer->getDatax(34); // When you want to access the member variables or functions through a pointer, you need to use the arrow operator ->, not the dot operator.
    base_class_pointer->displayx();

    return 0;
}