#include <iostream>
using namespace std;

class Employee
{
private:
    int salary; // By default all is private in class.

public:
    int mobileNo, addr;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The salary is: " << salary << endl;
        cout << "The mobileNo is: " << mobileNo << endl;
        cout << "The address is: " << addr << endl;
        // cout<<"The value of d is: "<<d<<endl;
        // cout<<"The value of e is: "<<e<<endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    salary = a1;
    mobileNo = b1;
    addr = c1;
    // d = d1;
    // e = e1;
}

int main()
{
    Employee harry;
    // harry.a = 134; ----> This will throw error as a, b, c are private.
    // harry.b = 135;
    // harry.c = 136;
    // harry.d = 137;
    // harry.e = 138;
    // harry.setData(1,2,4,5,6);
    //  harry.d = 137; // we can chage the values of d, e as they arer public.
    // harry.e = 138;
    // harry.getData();

    harry.setData(20000, 91, 1);
    // harry.salary = 30000; ----> we can not change the salary of an employee as it is private.
    harry.mobileNo = 92; // Here, we can change the mobile no. and address of an employee as it is public.
    harry.addr = 2;
    harry.getData();

    return 0;
}