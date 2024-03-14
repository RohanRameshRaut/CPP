#include <iostream>
using namespace std;

/* Hybrid inheritance --> One to many and Many to one
Student --> Test
Student --> Sports
Test --> Result
Sports --> Result
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};

// we use virtual Base class to avoid the ambiguity in hybrid inheritance in Many to one situation (class Result).
// ex: When Test and Sports classes are inheriting the class Student(Base class), they will get data members  (int a) of class Student, but in case fo hybrid inheritance we have to make One to many and Many to one, the ambiguity arises here when we make class Result, now the class Result will have 2 (int a) data members which data member should class Result inherite? the answer is: There should be only one incetance of (int a) data member not 2, this is handlled by (virtual Base class).

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void print_marks(void)
    {
        cout << "Your marks in maths is: " << maths << endl;
        cout << "Your marks in physics is: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = (maths + physics + score) / 3;
        print_number();
        print_marks();
        print_score();
        cout << "Your percentage is: " << total << endl;
    }
};

int main()
{
    Result rohan;
    rohan.set_number(66);
    rohan.set_marks(97, 64);
    rohan.set_score(80);
    rohan.display();

    return 0;
}