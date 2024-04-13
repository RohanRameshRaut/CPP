#include<iostream>
using namespace std;

// dynamic constructor
class employee{
    int size;
    int* p;
    public:
        employee(){

            cout<<"Enter the size: "<<endl;
            cin>>size;
            p = new int [size]; // or int *p = int[100] memory will be allocated for 100 integers i.e 2 X 100 = 200bytes
            cout<<"the 1st p is: "<<p<<endl; // this p variable(pointer variable) will the store the address of n integers passed by [size] i.e total 100(integers) *size of (2) = total bytes(200) address in heap.
        }
        void getData(){
            for(int i = 0; i<size; i++){
                cout<<"Enter: "<<i<<endl;
                cin>>p[i];
            cout<<"the *p is: "<<*p<<endl; // (*) is a dereferencing operator(value at operator). will show you the value at given location.
            cout<<"the &p is: "<<&p<<endl; // (&) is a address of operator. will show you the address, of that value, i.e total 1(integer) *size of (2) = total bytes(2) address in heap.
            cout<<"the p is: "<<p[i]<<endl; // will show you the address of n integers passed by [size], as it is alredy hold the adderess of the p = int[size].
            }
        }
        void displayData(){
            cout<<"Your employee array is: "<<endl;
            for(int i=0; i<size; i++){
                cout<<p[i]<<endl;
            }
        }

};

int main(){
    employee e;
    e.getData();
    e.displayData();

    return 0;
}