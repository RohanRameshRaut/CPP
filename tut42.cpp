#include <iostream>
#include <math.h>
using namespace std;

/*
Create 2 classes:
1. simpleCalculator - Takes input of 2 numbers usign a utility function and perform +, -, *, / and displyas the results using another function.
2. scientificCalculator - Takes input of 2 numbers usign a utility function and perform any four scientific operation of your choice, and displyas the results using another function.

Create another class hybridCalculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using?
Q2. Which mode of inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/

class simpleCalculator
{
protected:
    float a, b, c;

public:
    void inpt(float x, float y){
        a = x;
        b = y;
    }
    float add()
    {
        // a = x;
        // b = y;
        c = a + b;
        return c;
    }
    float sub()
    {
        // a = x;
        // b = y;
        c = a - b;
        return c;
    }
    float product()
    {
        // a = x;
        // b = y;
        c = a * b;
        return c;
    }
    float division()
    {
        // a = x;
        // b = y;
        c = a / b;
        return c;
    }

    void display()
    {
        cout << "Your answer is: " << c << endl;
    }
};

class scientificCalculator
{
protected:
    float x, y;
    float z;

public:
    // inpt()
    int power(int a, int b)
    {
        return z = pow(a, b);
    }
    float squarR(int a)
    {
        return z = pow(a, 2);
    }
    float loG(float a)
    {
        return z = log(a);
    }
    float taN(float a)
    {
        return z = tan(a);
    }
    void displayS(){
        cout<<"Your scientific answer is: "<<z<<endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
    public:
        float z = 1;
        float r = 1;
        float factorial(){
            while(r<=c){
                z = z*r;
                r++;
            }
        }
        
        void displayh(){
            cout<<"The hybrid ans is; "<<z<<endl;
        }


};

int main()
{
    hybridCalculator h1;
    // h1.inpt(20, 30);
    // h1.add();
    // h1.display();

    // h1.squarR(3);
    // h1.displayS();

    h1.inpt(3, 2);
    h1.add();
    h1.product();
    h1.factorial();
    h1.displayh();



    return 0;
}