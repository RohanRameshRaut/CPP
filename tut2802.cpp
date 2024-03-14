// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class c2;
class c1{
    int val1;
    friend void swap(c1 &, c2 &);
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void swap(c1 &, c2 &);
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

void swap(c1 &a, c2 &b){
    int temp;
    temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}
int main() {
    c1 obj1;
    c2 obj2;
    
    obj1.indata(34);
    obj2.indata(67);
    
    cout<<"Before Swap: "<<endl;
    obj1.display();
    obj2.display();
    
    swap(obj1, obj2);
    
    cout<<"After Swap: "<<endl;
    obj1.display();
    obj2.display();
    return 0;
}