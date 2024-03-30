#include <iostream>
using namespace std;

// Member Function Templates & Overloading Template Functions
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a) // It is a exact match for int a and has the highest priority than 02.
{
    cout<<"I am first func() "<<a<<endl;
}
template <class T>
void func(T a) // 02
{
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func1(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    // Harry<int> h(87);
    // h.display();
    // func(34); // In function overLoading and templates the Exact match or original takes the highest priority.
    func1(4); //

    return 0;
}