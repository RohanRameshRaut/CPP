#include <iostream>
using namespace std;
// add two strings

class adds
{
public:
    char s1[25], s2[25];
    adds(char st1[], char st2[])
    {
        strcpy(s1, st1);
        strcpy(s2, st2);
    }
    void operator+()
    {
        cout << "The concatenated string is: " << strcat(s1, s2);
    }
};

int main()
{
    char sm1[] = "Hello";
    char sm2[] = "World";
    adds a(sm1, sm2);
    +a;

    return 0;
}