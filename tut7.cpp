# include<iostream>

using namespace std;

int c = 45;

int main()
{
     //****************Build in data types******************************
    // int a, b, c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b;"<<endl;
    // cin>>b;

    // c = a+b;

    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is: "<<::c<<endl; //scope resolution operator is used to get global variable over the local variable. '::'

 //****************Float, double and long double Literals******************************
    // float d=34.4f; //by default c++ takes it as a double data type so we have to mention it as 34.4f.
    // long double e=34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; //double
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; //float
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl; //float
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; //long 
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; //long 

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    
    
    
    //****************Referance variables******************************
    // Rohan Das -----> Monty --------> Rohu ---------> Dangerous Coder

    float x = 455;
    float & y = x;

    cout<<x<<endl;
    cout<<y<<endl;

    //****************Typecasting**** means conversion of one data type to another data type****************

    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<c<<endl;


    return 0;



  
}