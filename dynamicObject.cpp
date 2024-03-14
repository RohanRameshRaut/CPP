// C++ program to illustrate the dynamic
// initialization as memory is allocated
// to the object
#include <iostream>
using namespace std;

class bank
{
    int principal;
    int years;
    float interest;
    float returnvalue;

public:
    // Default constructor
    bank() {}

    // Parameterized constructor to
    // calculate interest(float)
    bank(int p, int y, float i)
    {
        principal = p;
        years = y;
        interest = i / 100;
        returnvalue = principal;
        cout << "\nDeposited amount (float):";

        // Finding the interest amount
        for (int i = 0; i < years; i++)
        {
            returnvalue = returnvalue * (1 + interest);
        }
    }

    // Parameterized constructor to
    // calculate interest(integer)
    bank(int p, int y, int i)
    {
        principal = p;
        years = y;
        interest = float(i) / 100;
        returnvalue = principal;
        cout << "\nDeposited amount"
             << " (integer):";

        // Find the interest amount
        for (int i = 0; i < years; i++)
        {
            returnvalue = returnvalue * (1 + interest);
        }
    }

    // Display function
    void display(void)
    {
        cout << returnvalue
             << endl;
    }
};

// Driver Code
int main()
{
    // Variable initialization
    int p = 200;
    int y = 2;
    int I = 5;
    float i = 2.25;

    // Object is created with
    // float parameters
    bank b1(p, y, i);

    // Function Call with object
    // of class
    b1.display();

    // Object is created with
    // integer parameters
    bank b2(p, y, I);

    // Function Call with object
    // of class
    b2.display();

    return 0;
}
