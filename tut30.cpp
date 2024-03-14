#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int , int); // Constructor declaration

    void printNumber(){
        cout<<"Your number is: "<< a <<" + "<< b<<"i"<<endl;
    }
};

Complex ::Complex(int x, int y){  // This is a parameterized constructor as it takes 2 parameters.
    a = x;     
    b = y;  
    // cout<<"Hello world"<<endl;
}

int main(){
    // Implicit call
    Complex a(4, 6); 

    // Explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    
    return 0;
}

// Implicit call: means that the constructor is called even when its name has not been mentioned in the statement.
// The declaration of an implicit call is: Class-name object(arg1, arg2, ..., argn);
// Explicit call: means that the constructor is explicitly provided to invoke it so that the object can be initialized.