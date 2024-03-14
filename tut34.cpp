#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        Number(Number &obj){ // compiler by default passes its own created copy constructor when it is not defined and get called for every object. 
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a; // It is assigning the value of object z to a which is already defined object of the same class.
        }
        
        void display(){
            cout<<"The number for this object is: "<<a<<endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); //copy constructor invoked, cause it is defined/declared and invoked the copy constructor at the same line. 
    z1.display();

    z2 = z; // Will not invoke the copy construtor as it is already defined above as object and got assigned default constructor.
    z2.display();

    // z1 should exactly resemble z or x or y.
    return 0;
}