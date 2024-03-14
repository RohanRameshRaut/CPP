#include<iostream>
using namespace std;

class Base{
    protected: // This is a protected but can be Derived by derived class.
         int a;
    public:
        int b;
};

/*
 Access in a Derived Class

Base class members                         Derived Class 
                            Public derivation    Private Derivation    Protected Derivation
1. Private members           Not Inherited         Not Inherited         Not Inherited
2. Protected members         Protected             Private               Protected
3. Public members            Public                Private               Protected

*/

class Derived: protected Base{
 // Protected members of base class can be accessed here...
};

int main(){
    Base b;
    Derived d;
    // cout<<b.a; // Can not be accessible cause its protected, will throw error like private member.
    // cout<<d.a; // Can not be accessible cause its protected, will throw error like private member.
    return 0;
}