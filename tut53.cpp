#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void setData(int a)
    {
        // a = a; will show you the garbage value as local variables has privority in c++.
        this->a = a;
    }
    void getData()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function.
    A b;
    b.setData(4);
    b.getData();

    return 0;
}