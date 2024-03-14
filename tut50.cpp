#include <iostream>
using namespace std;

// Revisiting Pointers new and delete keywords in cpp

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    *ptr = 999; // as we have the address we can change the value.
    cout << "The value of a is: " << *(ptr) << endl;

    // new operator
    // int *p = new int(40); // used to initialize value dinamically, just like the above example (replaces &a).
    float *p = new float(40.78);
    cout << "The value at p is: " << *(p) << endl;

    int *arr = new int[3]; // allocating a block of memory of size int, to store the 3 integers using square brackets, [3 int i.e 2*2 = 4bytes].
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20; // value at(*) arr+1 = 20.
    arr[2] = 30;
    // delete operator
    // delete[] arr; // it will free the memory
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    return 0;
}