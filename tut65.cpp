#include <iostream>
using namespace std;

//Class templates with multiple parameters, (one, two or more than two by comma seperated).
/*
    template<class T1, class T2>
    class nameOfClass{
        //body
    };
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c'); //two or more dataTypes are passed(dataTypes could be class,char, float, int , double etc...) 
    obj.display();

    return 0;
}