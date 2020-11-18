//CSC242 Project

//Tracking changes through the Git CMD/Bash.

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
        else if (scores[i] >= best - 30)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student # " << i + 1 << "'s grade is " << grade << endl;
    }
    return 0;
}

