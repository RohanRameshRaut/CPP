#include <iostream>
using namespace std;

/*
class object initialization list in constructor (syntax) (means: giving values to class data member).
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){ constructor-body}
};

*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b)-->RED Flag this will create problems because a will be initialized first(cause it is declared first.).
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}