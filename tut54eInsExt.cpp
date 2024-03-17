#include <iostream>
using namespace std;

// << insertion --> It is derived class of "ostream", ostream is a base class of insertion.
// << extraction --> It is derived class of "istream", istream is a base class of extraction.

class s1
{
    string name;

public:
    friend ostream &operator<<(ostream &out, s1 &a);
    friend istream &operator>>(istream &input, s1 &a);

    void display()
    {
        cout << endl
             << "Your name is: " << name << endl;
    }
};

ostream &operator<<(ostream &out, s1 &a) // parameter reference--> (&cout, &obj)
{ // ostream is a class and out is an object of that class just like s1 and a.
 // ostream &object_name is compolsory as it contains(cout) in it, s1 &a is our class and object to work with.
    out << "Enter your name: " << a.name << endl;
    return out;
}

istream &operator>>(istream &input, s1 &a)
{
    input >> a.name;
    return input;
}

int main()
{
    s1 obj;
    cout << obj; // cout and obj are the parameters passed explicitly to the function, cout is compolsory to pass as it is defined in c++ libraries.
    cin >> obj;  // cin is an object of istream class and obj is an object of s1 class.
    obj.display();

    return 0;
}
