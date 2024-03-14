#include<iostream>
using namespace std;

// Destructors are created to deallocate the memory taken by the objects, only after the termination of program, object is destroyed or goes out of scope.
// Destructor never takes an argument/parameter nor does it return any value.
// Destructors are invoked by the compiler implicitly (no need to call manually) when the termination of program takes place or object is destroyed or goes out of scope.

int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number: "<<count<<endl;
        }

        ~num(){ // Destructor works like a stack LIFO (last in first out). It deallocates the memory by following LIFO pattern.
            cout<<"This is the time when my destructor is called for object number: "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    { // Bracket indicates the scope of objects that are created inside the bracket.
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3; // The scope of these objects is limited to this block only.
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;

    return 0;
}