#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // showing error for invalid arguments
    if (argc != 2)
    {
        cout << "Invalid argument.";
    }
    else
    {
        // creating a ofstram fout object  to open a file at index 1 .
        ofstream fout;
        fout.open(argv[1]); // opening file at index 1 for writing.

        for (int i = 0; i < 9; i++)
        {
            if (num[i] % 2 == 0)
            {
                fout << num[i] <<"\n"; // writing an even number in file.
            }
        }
        fout.close();

        // reading a file
        ifstream fin;
        string ch;         // to store the characters.
        fin.open(argv[1]); // opening file at index 1 for reading.
        cout << "contents of " << argv[1] << "\n";
        while (fin.eof() == 0) // object_name.eof(end of file) function represents the end of the file, return 1 if true else 0;
        {
            getline(fin, ch); // getline is a function used to read only one line takes two arguments (object_name, string_variable).
            cout << ch << endl;
        }
        fin.close();
    }

    return 0;
}