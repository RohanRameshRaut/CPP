#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(){
            a = 0;
            b = 0;
        } // Default constructor

         Complex(int x){
            a = x;
            b = 0;
        } // parameterized constructor

        Complex(int x, int y){
            a = x;
            b = y;
        } // parameterized constructor

        void printNumber(){
            cout<< "Your number is "<< a << " + "<< b<< "i "<<endl;

        }
};

int main(){
    Complex c1;
    c1.printNumber();
    Complex c2(5);
    c2.printNumber();
    Complex c3(4, 6);
    c3.printNumber();

    // Depending upon the parameter set it will automatically invoke that perticular constructor having same parameters as same as arguments passed it.

    return 0;
}