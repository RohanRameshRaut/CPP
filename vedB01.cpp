#include <iostream>
using namespace std;
// #include<conio.h>

class MyMatrix
{
    int m, n, i, j, tmtx[100][100], imtx[100][100];
    int **ptr;
    int **ptr = new int[]

public:
    void getData()
    {
        cout << "Enter the value of m: ";
        cin >> m;
        cout << "Enter the value of n: ";
        cin >> n;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "Enter element " << i << "," << j << ": ";
                cin >> ptr[i][j];
            }
        }
    }
    void display()
    {
        cout << "The matrix" << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << ptr[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void operator*()
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                ptr[j][i] = ptr[i][j];
            }
        }
    }
    // void Tdisplay()
    // {
    //     cout << "The matrix" << endl;
    //     for (i = 0; i < m; i++)
    //     {
    //         for (j = 0; j < n; j++)
    //         {
    //             cout << tmtx[i][j] << "\t";
    //         }
    //         cout << "\n";
    //     }
    // }
    void operator++()
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                ptr[i][j]++;
            }
        }
    }
    // void idisplay()
    // {
    //     cout << "The matrix" << endl;
    //     for (i = 0; i < m; i++)
    //     {
    //         for (j = 0; j < n; j++)
    //         {
    //             cout << mtx[i][j] << "\t";
    //         }
    //         cout << "\n";
    //     }
    // }
};

int main()
{
    // clrscr();
    MyMatrix m1;
    m1.getData();
    m1.display();
    *m1;
    // m1.Tdisplay();
    m1.display();
    ++m1;
    m1.display();

    //  getch();
    return 0;
}
