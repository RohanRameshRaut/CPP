#include <iostream>
#include <fstream>
using namespace std;

class Movie
{
    string M_name, director_Name;
    int Release_Year, Budget;

public:
    void getData(int size)
    {
        ofstream hout("Movie.txt"); // You can open a file in append mode--> ofstream hout("Movie.txt", ios::app);
        for (int i = 0; i < size; i++)
        {
            cout << "Enter " << i + 1 << " Movie name: ";
            cin.ignore(); // The cin.ignore() function is used to clear the newline character from the input buffer before reading the string. This ensures that the getline() function works correctly for string input after numeric input.
            getline(cin, M_name); // To handle input with spaces while using cin, you can use the getline() function instead of cin.
            // cin >> M_name;
            cout << "Enter director_Name: ";
            getline(cin, director_Name);
            // cin >> director_Name;
            cout << "Enter Release_Year: ";
            cin >> Release_Year;
            cout << "Enter Budget: ";
            cin >> Budget;
            hout << "\nMovie_name: " << M_name << "\n director_Name: " << director_Name << "\n Release_Year: " << Release_Year << "\n Budget: " << Budget << endl; // keep the object in loop to push the values.
        }
        hout.close(); // Close file after writing
    }

    void display()
    {
        ifstream hin("Movie.txt");
        string content;
        while (getline(hin, content))
        {
            cout << content << endl;
        }
        hin.close();
    }
};

int main()
{
    Movie m1;
    int size;
    cout << "Enter the number of movies: ";
    cin >> size;
    m1.getData(size);
    m1.display();

    return 0;
}
