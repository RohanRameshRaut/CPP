#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class,
    // It is used to initializ the objects of its class.
    // It is automatically invoked(called) wheneverr object is created.
    // In simple words constructor is nothing but a special type of member fuction with same name as of class,
    // used to automatically initializ the object of a class.

    Complex(void); // Constructor declaration

    void printNumber(){
        cout<<"Your number is: "<<a <<"+"<<b <<"i"<<endl;
    }
};

Complex ::Complex(void){  // Constructor defination ----> This is a default constructor as it accepts no parameters.
    a = 0;     
    b = 0;  
    // cout<<"Hello world"<<endl;
}

int main(){
    Complex c; // here you can see, we do not need to call a constructor function as it holds the same name as of a class and gets automatically invoked whenever you create an object of that class.
    c.printNumber();
    
    return 0;
}

/* Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return type (void pn nahi)
4. It can have default arguments(void sum(int a = 10, int b))
5. We cannot refer to their address

*/