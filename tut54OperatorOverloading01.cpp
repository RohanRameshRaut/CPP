#include <iostream>
using namespace std;

// Overloading Unary Operators using 'friend' Functions.
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
    friend void operator-(demo &);
};

void demo::display()
{
    cout << x << endl
         << y << endl
         << z << endl;
}

void operator - (demo &obj2) 
{
    obj2.x = -obj2.x; 
    obj2.y = -obj2.y; 
    obj2.z = -obj2.z;
}

int main()
{
    demo obj1;
    obj1.getData(10, 20, 30);
    cout << "original" << endl;
    obj1.display();
    // -obj1;
    // OR
    // operator -(obj1);
    cout << "Negative" << endl;
    obj1.display();

    return 0;
}