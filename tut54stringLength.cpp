#include <iostream>
using namespace std;

class String
{
    char str[20];

public:
    void getData()
    {
        cout << "Enter the string: " << endl;
        cin >> str;
    }
    void operator!()
    {
        cout << "Length: "<< strlen(str) << endl;
    }
};

int main()
{
    String s1;
    s1.getData();
    !s1;

    return 0;
}