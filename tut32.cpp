#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }

        void printData();
};

void Simple :: printData(){
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}

int main(){
    Simple s(1, 4);
    s.printData();

    Simple s2(1); // We have not passed the second argument here so, it will take the b=9 as second argument, that we have alredy declared as default argument.The best example is in the book.
    s2.printData();

    return 0;
}