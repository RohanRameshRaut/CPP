#include <iostream>
using namespace std;

/*
Notes:
1) Compile knows how to add two variables or values using (+) ex: a+b is valid, it is simple two add two numbers but what if we want to add two objects (like: obj3 = obj1 + obj2) obviously compiler will show you the error, cause compiler know how to add two numbers using (+) but not two objects.
2) To solve the above problem and to tell the compiler how to add two numbers c++ introduced (operator overloading) function, used to play with objects through unary and binary operators.
3) Almost all C++ operator can be oveloaded Except: 1) . Member access operator 2) .* pointer to member operator 3) :: scope resolution operator 4) ?: conditional operator and sizeof() operator.

Syntax:
    return_type classname:: operator Operator_To_Be_Overloaded (argumentList)
    {
        // body;
    }

    ex:
        void demo:: operator-()
        {
            // body;
        }
*/

// Unary operator Overloading (a++, --b) --> only one operand is there.
class demo
{
    int x;
    int y;
    int z;

public:
    void getData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display();
    void operator-();
};

void demo::display()
{
    cout << x << endl
         << y << endl
         << z << endl;
}

void demo::operator-() // we will convert the positive variables into negative variables.
{
    x = -x; // Since it is an unary operator(++a only one operand) then compiler will understand the x,y,z belongs to obj1
    y = -y; // We have to differentiate if it was binary operator(a+b needs two operand).
    z = -z;
}

int main()
{
    demo obj1;
    obj1.getData(10, 20, 30);
    cout << "original" << endl;
    obj1.display();
    -obj1; // This will call Overloading function (oerator-() function)
    cout << "Negative" << endl;
    obj1.display();

    return 0;
}