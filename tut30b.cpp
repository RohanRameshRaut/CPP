#include <iostream>
#include <math.h>
// or #include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend void pointDistance(Point, Point);

    void displayPoint()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
};

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points.

void pointDistance(Point a, Point b) // Takes objects as parameter and access the variable using (.) member operator
{
    double result;
    result = sqrt((pow((b.x - a.x), 2) + pow((b.y - a.y), 2)));
    cout << "Distance between 2 points is: "<<result<< endl;
}

int main()
{
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    pointDistance(p, q);

    return 0;
}