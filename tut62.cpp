#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Opening file using member function open() of the class ofstream and ifstream.
    ofstream obj1;
    obj1.open("sample60.txt");
    obj1 << "This is me \n";
    obj1 << "This is me also \n";
    obj1 << "This is also me";
    obj1.close(); // must to close the file.

    ifstream obj2;
    string st;
    obj2.open("sample60.txt");
    // obj2>>st; // this line will take only one word without spaces
    // getline(obj2, st); // this line read only one line.

    cout << "tellg is: " << obj2.tellg() << endl; // The tellg() function is used with input streams, and returns the current “get” position of the pointer in the stream.

    while (obj2.eof() == 0)
    {   // object_name.eof(end of file) function represents the end of the file.
        // condition explained here: eof()==0 means, If eof() is detected the end of file, then function returns a non-zero value(1) otherwise return zero.
        getline(obj2, st);
        cout << st << endl;
    }
    obj2.close();

    return 0;
}