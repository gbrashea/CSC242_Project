//CSC242 Project

//This comment is the first change to my code in order to test my 1st repository!

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int MAXnumofstdnts = 100;
    int scores[MAXnumofstdnts];
    int best = 0;

    int numberOfScores;
    cout << "Enter the total number of students: ";
    cin >> numberOfScores;
    cout << "Enter " << numberOfScores << "'s score: ";

    for (int i = 0; i < numberOfScores; i++)
    {
        cin >> scores[i];
        if (scores[i] > best)
            best = scores[i];
    }

    char grade;
    for (int i = 0; i < numberOfScores; i++)
    {
        if (scores[i] >= best - 10)
        {
            grade = 'A';
        }
        else if (scores[i] >= best - 15)
            grade = 'B';
        else if (scores[i] >= best - 25)
            grade = 'C';
        else if (scores[i] >= best - 35)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student # " << i + 1 << "'s grade is " << grade << endl;
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
