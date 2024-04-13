#include <iostream>
#include <fstream> // this header file contains a predefined classes to work with the file manipulation.

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main()
{
    string st = "Harry bhai";
    string st2;
    char s1[50];
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // (write operation), ofstream is a class predefined in fstream.h file.(out is an object of ofstream class, sample60.txt is file_name passed as argument.)
    out << st; // will write "Harry bhai" in sample60.txt

    // Opening files using constructor and reading it
    ifstream Rohan("sample60b.txt"); // (read operation), ifstream is a class predefined in fstream.h file.(Rohan is an object of ifstream class, sample60.txt is file_name passed as argument.)
    // Rohan>>st2; // it will not read the space between the words.
    getline(Rohan, st2); // to avoid the above problem and get the whole only one line read, getline function is used it taked 2 parameters 1st--> object of a ifstream and 2nd-->string variable in which you want to store the data.
    cout << st2;
    return 0;
}