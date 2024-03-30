#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b)/2.0;

//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b)/2.0;

//     return avg;
// }

// to avoid the repetation of code, for same operation but different dataType, we use template<class T1>.
// Using templates we can avoid function overloading.
template <class T1, class T2>
float funcAverage(T1 a, T2 b) // passing (int 5, int 2) or (int 5, float 2.4) in same function using template<class T1, class T2).
{
    float avg = (a + b) / 2.0;

    return avg;
}

int main()
{
    float a, b;
    a = funcAverage(5, 2);
    a = funcAverage(5, 2.4);
    // b = funcAverage2(5, 2.4);
    cout << "Average = " << a << endl;
    // printf("The average of these numbers is: %.3f", b);

    return 0;
}