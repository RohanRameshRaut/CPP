#include<iostream>
using namespace std;

class sample
{
    int x;
    public: 
        void getData(int a)
        {
            x = a;
        }
        void display()
        {
            cout<<"a = "<<x<<endl;
        }
        friend sample operator + (sample, sample);

};

sample operator + (sample s1, sample s2)
{
    sample s3;
    s3.x = s1.x + s2.x;
    return s3;

}

int main()
{
    sample s1, s2, s3;
    s1.getData(4);
    s2.getData(5);
    cout<<"s3 is: "<<endl;
    s3 = s1 + s2; // --> calling friend function 
    // or
    // s3 = operator + (s1, s2);
    s3.display();

    return 0;
}