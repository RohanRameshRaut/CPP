#include <iostream>
#include <cstring>
using namespace std;

/*
B) Create a C++ class MyString with data members a character pointer and str_length. (Use new and delete operator). Write a C++ program using operator overloading to perform following operation: i. ! To reverse the case of each alphabet from a given string. ii. < To compare length of two strings. iii. + To add constant ‘n’ to each alphabet of string.
*/
class MyString
{
private:
    char *str;
    int str_length;

public:
    // Constructor
    MyString(const char *s)
    {
        str_length = strlen(s);
        str = new char[str_length + 1];
        strcpy(str, s);
    }

    // Destructor
    ~MyString()
    {
        delete[] str;
    }

    // Function to reverse the case of each alphabet
    MyString operator!()
    {
        char *new_str = new char[str_length + 1];
        for (int i = 0; i < str_length; i++)
        {
            if (isalpha(str[i]))
            {
                if (islower(str[i]))
                {
                    new_str[i] = toupper(str[i]);
                }
                else
                {
                    new_str[i] = tolower(str[i]);
                }
            }
            else
            {
                new_str[i] = str[i];
            }
        }
        new_str[str_length] = '\0';
        return MyString(new_str);
    }

    // Function to compare lengths of two strings
    bool operator<(const MyString &other)
    {
        return str_length < other.str_length;
    }

    // Function to add constant 'n' to each alphabet of string
    MyString operator+(int n)
    {
        char *new_str = new char[str_length + 1];
        for (int i = 0; i < str_length; i++)
        {
            if (isalpha(str[i]))
            {
                new_str[i] = str[i] + n;
            }
            else
            {
                new_str[i] = str[i];
            }
        }
        new_str[str_length] = '\0';
        return MyString(new_str);
    }

    // Function to display the string
    void display()
    {
        cout << str << endl;
    }
};

int main()
{
    MyString str1("Hello");
    MyString str2("World");

    cout << "Original strings:" << endl;
    str1.display();
    str2.display();

    cout << "\nAfter reversing the case of each alphabet in string 1:" << endl;
    (!str1).display();

    cout << "\nComparing lengths of two strings: ";
    if (str1 < str2)
    {
        cout << "String 1 is shorter than String 2" << endl;
    }
    else
    {
        cout << "String 1 is not shorter than String 2" << endl;
    }

    int n = 1;
    cout << "\nAdding constant " << n << " to each alphabet in string 2:" << endl;
    (str2 + n).display();

    return 0;
}
