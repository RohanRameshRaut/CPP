#include <iostream>
using namespace std;

/*
B) Create a C++ class MyString with data members a character pointer and str_length. (Use new and delete operator). Write a C++ program using operator overloading to perform following operation: i. ! To reverse the case of each alphabet from a given string. ii. < To compare length of two strings. iii. + To add constant ‘n’ to each alphabet of string.
*/
class MyString
{
    char *ptr1 = new char[100];
    char *ptr2 = new char[100];
    int str_length;

public:
    MyString(char p1[], char p2[])
    {
        strcpy(ptr1, p1);
        strcpy(ptr2, p2);
    }
    void operator!()
    {
        strrev(ptr1);
        strrev(ptr2);
    }
    void operator<(char ptr2[])
    {
        cout << "lenght of string 1: " << strlen(ptr1) << endl;
        cout << "lenght of string 2: " << strlen(ptr2) << endl;
    }
    void display()
    {
        cout<<ptr1<<endl;
        cout<<ptr2<<endl;
    }

};

int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    MyString obj1(s1, s2);
    !obj1;
    obj1.display();
    obj1.operator<(s2);
    obj1.display();

    return 0;
}
