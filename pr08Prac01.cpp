#include <iostream>
#include <fstream>
using namespace std;

// Function to compute median
double median(int *arr, int size)
{
    if (size % 2 == 0)
    {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
    else
    {
        return arr[size / 2];
    }
}

// Function to compute average
double average(int *arr, int size)
{
    double sum = 0, avg;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}

int main()
{
    // Numbers.txt --> 123456789
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ofstream fout("Numbers.txt");
    for (int i = 0; i < 9; i++)
    {
        fout << a[i] << endl;
    }
    fout.close();

    ifstream fin("Numbers.txt");
    ofstream evenFile("even_number.txt");
    ofstream oddFile("odd_number.txt");

    int n;
    while (fin >> n)
    {
        if (n % 2 == 0)
        {
            evenFile << n << endl;
        }
        else
        {
            oddFile << n << endl;
        }
    }
    cout << "Files created" << endl;
    fin.close();
    evenFile.close();
    oddFile.close();

    double evenMedian = 0, oddMedian = 0, evenAverage = 0, oddAverage = 0;
    double number = 0;
    int evenCounter = 0, oddCounter = 0;
    int evenArray[100], oddArray[100];
    ifstream ievenFile("even_number.txt");
    ifstream ioddFile("odd_number.txt");

    while (ievenFile >> number)
    {
        evenArray[evenCounter++] = number;
    }
    cout << "even_number.txt contains: " << evenCounter << " numbers" << endl;
    cout << "even_number.txt median is: " << median(evenArray, evenCounter) << endl;
    cout << "even_number.txt Average is: " << average(evenArray, evenCounter) << endl;

    cout << "\n";
    int num;
    while (ioddFile >> num)
    {
        oddArray[oddCounter++] = num;
    }
    cout << "odd_number.txt contains: " << oddCounter << " numbers" << endl;
    cout << "odd_number.txt median is: " << median(oddArray, oddCounter) << endl;
    cout << "odd_number.txt Average is: " << average(oddArray, oddCounter) << endl;

    return 0;
}
