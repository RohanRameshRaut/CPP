#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter the id of Employee: "<<endl;
            cin>>id;

        }
        void getId(void){
            cout<<"The id of this Employee is "<<id<<endl;
        }
};

int main(){
    // Employee harry, Rohan, Ved, Lovish, Shruti;
    // harry.setId();
    // harry.getId();

    Employee fb[5]; //array of objects
    for(int i=0;i<5;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
    
}