#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
1. simpleCalculator - Takes input of 2 numbers usign a utility function and perform +, -, *, / and displyas the results using another function.
2. scientificCalculator - Takes input of 2 numbers usign a utility function and perform any four scientific operation of your choice, and displyas the results using another function.

Create another class hybridCalculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using? ---> Multiple inheritance.
Q2. Which mode of inheritance are you using? ---> Publically inheritance.
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/

// Answer>>>>>>>>>>>>>>>>>>>>>>>>>>

class simpleCalculator{
    int a, b;
    public:
    void getDataSimple(){ // utility function for taking input from user.
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
    }

    void performOperationsSimple(){
        cout<<"The value of a + b is: "<<a + b<<endl;
        cout<<"The value of a - b is: "<<a - b<<endl;
        cout<<"The value of a * b is: "<<a * b<<endl;
        cout<<"The value of a / b is: "<<a / b<<endl;
    }
};

class scientificCalculator{
        int a, b;
    public:
    void getDataScientific(){ // utility function for taking input from user.
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
    }

    void performOperationsScientific(){
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{

};

int main()
{
    hybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}