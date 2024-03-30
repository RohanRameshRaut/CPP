#include <iostream>
using namespace std;

template <class T> // T is a variable which stores the dataType given by user.
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // here this->arr[i] means curren or 1st object's pointter(arr[i]*v2.arr[i])
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // cout << "The dot product is: " << v1.dotProduct(v2);

    // using template for float(custorm dataType)
    Vector<float> v1(3); //passing a dataType as like variable
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    Vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    cout << "The dot product is: " << v1.dotProduct(v2);

    return 0;
}