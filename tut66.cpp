#include <iostream>
using namespace std;

// Class Templates with Default Parameters

template <class T1 = int, class T2 = float>
class Harry
{
public:
    T1 a;
    T2 b;
    Harry(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Harry<> h(4, 4.6); // just like fuction with default parameter, by default second parameter is float and first is int.
    h.display();
    cout<<endl;
    Harry<char> h1('D', 4.6); // we changed the first parameter to <char> dataType.
    h1.display();

    return 0;
}