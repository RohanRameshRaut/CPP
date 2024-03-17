#include<iostream>
using namespace std;

class String
{
    char str[40];
    public:
        void getData()
        {
            cout<<"Enter the string to reverse: "<<endl;
            cin>>str;
        }
        void display()
        {
            cout<<str<<endl;
        }
        void operator ~ ()
        {
            strrev(str);
        }
};

int main()
{
    String s1;
    s1.getData();
    ~s1;
    s1.display();

    return 0;
}