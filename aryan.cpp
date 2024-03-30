#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class simplecalculator
{
    double a;
    double b;

public:
    void Addition(void);
    void Substraction(void);
    void Muiltipication(void);
    void Division(void);
    void Remainder(void);
    void Persentage(void);
};
void simplecalculator::Addition(void)
{
    cout << "Enter A First Value:";
    cin >> a;
    cout << "Enter A Second Value:";
    cin >> b;
    cout << "The Addition Of First And Second Number Is:" << a + b << endl;
}

void simplecalculator::Substraction(void)
{
    cout << "Enter A First Value:";
    cin >> a;
    cout << "Enter A Second Value:";
    cin >> b;
    cout << "The Substraction Of First And Second Number Is:" << a - b << endl;
}

void simplecalculator::Muiltipication(void)
{
    cout << "Enter A First Value:";
    cin >> a;
    cout << "Enter A Second Value:";
    cin >> b;
    cout << "The Muiltipication Of First And Second Number Is:" << a * b << endl;
}

void simplecalculator::Division(void)
{
    cout << "Enter A Dividend Value:";
    cin >> a;
    cout << "Enter A Divisor Value:";
    cin >> b;
    cout << "The Division Of Given Number Is:" << a / b << endl;
}

void simplecalculator::Remainder(void)
{
    cout << "Enter A Dividend Value:";
    cin >> a;
    cout << "Enter A Divisor Value:";
    cin >> b;
    double p = int(a) % int(b);
    cout << "The Remainder Of Given Number Is:" << p << endl;
}

void simplecalculator::Persentage(void)
{

    cout << "Enter A Gain Value:";
    cin >> a;
    cout << "Enter A Base Value:";
    cin >> b;
    cout << "The Persentage Given Number Is:" << ((a / b) * 100) << " %" << endl;
}

class scentificcalculator
{
    int c;
    int d;

public:
    void Power(void);
    void SquareRoot(void);
    void Sine(void);
    void Cos(void);
    void Tan(void);
    void Log(void);
};

void scentificcalculator::Power(void)
{
    cout << "Enter The Number Of Calculating Its Power Value:";
    cin >> c;
    cout << "Enter The Number For Power:";
    cin >> d;
    cout << "The Power Is:" << pow(c, d) << endl;
}

void scentificcalculator::SquareRoot(void)
{
    cout << "Enter The Number Of Calculating Its Square Root Value:";
    cin >> c;
    cout << "The Square Root Is:" << sqrt(c) << endl;
}

void scentificcalculator::Sine(void)
{
    cout << "Enter The Number Of Calculating Its Sine Value:";
    cin >> c;
    cout << "The Sine Is:" << sin(c) << endl;
}

void scentificcalculator::Cos(void)
{
    cout << "Enter The Number Of Calculating Its Cos Value:";
    cin >> c;
    cout << "The Cos Is:" << cos(c) << endl;
}

void scentificcalculator::Tan(void)
{
    cout << "Enter The Number Of Calculating Its Tan Value:";
    cin >> c;
    cout << "The Tan Is:" << tan(c) << endl;
}

void scentificcalculator::Log(void)
{
    cout << "Enter The Number Of Calculating Its Log Value:";
    cin >> c;
    cout << "The Log Is:" << log(c) << endl;
}

class hybried1 : public simplecalculator, public scentificcalculator
{
public:
    void RunSimpleCalculator();
    void RunScentifiCalculator();
};

void hybried1::RunSimpleCalculator()
{

    int ch;
    int a, b;
    cout << "1.Addition(+):" << endl;
    cout << "2.Substraction(-):" << endl;
    cout << "3.Muiltipication(*):" << endl;
    cout << "4.Division(/):" << endl;
    cout << "5.Remainder(%):" << endl;
    cout << "6.Persentage(%):" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "Enter A choice Which You Want to calculate:";
    cin >> ch;
    cout << "" << endl
         << endl;

    switch (ch)
    {
    case 1:
        Addition();
        break;

    case 2:
        Substraction();
        break;

    case 3:
        Muiltipication();
        break;

    case 4:
        Division();
        break;

    case 5:
        Remainder();
        break;

    case 6:
        Persentage();
        break;

    default:
        cout << "Please Enter Valid Above Given Number To Perform Operation." << endl;
    }
}

void hybried1::RunScentifiCalculator()
{
    int ch;
    int a, b;
    cout << "1.Powre(^):" << endl;
    cout << "2.Square Root(SR):" << endl;
    cout << "3.Sine(S):" << endl;
    cout << "4.Cos(C):" << endl;
    cout << "5.Tan(T):" << endl;
    cout << "6.Log(L):" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "Enter A choice Which You Want to calculate:";
    cin >> ch;
    cout << "" << endl
         << endl;

    switch (ch)
    {

    case 1:
        Power();
        break;

    case 2:
        SquareRoot();
        break;

    case 3:
        Sine();
        break;

    case 4:
        Cos();
        break;

    case 5:
        Tan();
        break;

    case 6:
        Log();
        break;

    default:
        cout << "Please Enter Valid Above Given Number To Perform Operation." << endl;
    }
}

int main()
{
    // clrscr();
    int C;
    hybried1 h1;
    cout << "1.SimpleCalculator" << endl;
    cout << "2.scentificcalculator" << endl;
    cout << "Enter a choice Which Calculator You Want Use to calculate:";
    cin >> C;
    cout << "" << endl
         << endl;

    switch (C)
    {
    case 1:
        h1.RunSimpleCalculator();
        break;

    case 2:
        h1.RunScentifiCalculator();
        break;

    default:
        cout << "Please Enter Valid Above Given Number To Perform Tow Type Calculator." << endl;
    }
    // getch();
    return 0;
}
