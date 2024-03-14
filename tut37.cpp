#include <iostream>
using namespace std;

// Base class (father class)
class Employee
{

public:
    int id;
    float salary;
    Employee() {} // In some cases the compiler automatically invokes the constructor to allocate the memory to object of a class, so it is must to declare a default constructor.
    Employee(int empId)
    {
        id = empId;
        salary = 34;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note: for inherited class(derived class/child class)/ Programmer class.
1. Visibility-Mode: How you inherite the public members of base class is called visibility-mode.
2. Private Members of base class are never inherited in any case, only the public members can be inherited.
3. Default visibility mode is private
4. Public Visibility Mode: Public members of the base class becomes Public members of the derved class
5. Private Visibility Mode: Public members of the base class becomes Private members of the derved class

*/

// Creating a Programmer class derived from Employee Base class.
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int empId)
    {               // derived class automatically calls the base class so, It is must to declare a default constructor in base class else it will show you the error.
        id = empId; // Here, id will become the private member of this class as its By default visibility-mode is private and public members of base class becomes private members of derived class.
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    // cout<<skillF.id<<endl; // It will throw error, cause you are trying to acces the private member of a inherite class(derived class/programmer class).
    skillF.getData(); // correct way to print the id(private member).

    return 0;
}