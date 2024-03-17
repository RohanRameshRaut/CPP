#include <iostream>
using namespace std;

/*
Notes:
1) What if we want to add two objects (like: obj3 = obj1 + obj2)?
2) So we need some variables to hold Data so we add int first, second.

Syntax:
    return_type classname:: operator Operator_To_Be_Overloaded (parameters)
    {
        // body;
    }

    ex:
     --> The below function is for
        obj3 = obj1 * obj2; --> We don't see any function passing argument here.
        Hint:
        {
            obj3 = obj1 * obj2;
            can also be written as
            obj3 = obj1.operator * (obj2);
            It's complex so we usually prefer: obj3 = obj1 * obj2;
            That's why we have to write (multiply c) because c represents obj2;
        }
        multiply multiply:: operator * (multiply c) --> why we are passing argument?
        {
            multiply temp;
            temp.first = first * c.first;
            temp.second = second * c.second;

            return temp;
        }
*/

// Binary operator Overloading (obj1*obj2) --> tow operands.
class multiply
{
    int first, second;

public:
    void getData(int a, int b)
    {
        first = a;
        second = b;
    }
    void display();
    multiply operator*(multiply);
};

void multiply::display()
{
    cout << "First = " << first << endl
         << "second = " << second << endl;
}

multiply multiply::operator*(multiply c)
{
    multiply temp;
    temp.first = first * c.first;
    temp.second = second * c.second;

    return temp;
}

int main()
{
    multiply obj1, obj2, obj3;
    obj1.getData(15, 20);
    obj2.getData(3, 45);

    obj3 = obj1 * obj2;
    // or
    // obj3 = obj1.operator * (obj2);
    cout <<"Ans obj3: ";
    obj3.display();

    return 0;
}