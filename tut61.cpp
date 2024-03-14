#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with hout stram 
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user 
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    // Writing a string to the file by passing a variable containing the name 
    hout<<"My name is: "<<name;
    hout.close(); // link is closed between tut61.cpp to sample60.txt.

    ifstream hin("sample60.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<content;
    hin.close();

    return 0;
}