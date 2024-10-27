// PFLAB5-TASK7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
    int marks, totalMarks = 0, numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    for (int i = 1; i <= numSubjects; ++i) {
        cout << "Enter the marks for subject " << i<<" is:";
        cin >> marks;
        if (marks < 0) {
            cout << "Invalid marks for subject " << i << ". Marks cannot be negative." << endl;
            i--;
            continue;
        }
        else if (marks > 100) {
            cout << "Invalid marks for subject " << i << ". Marks cannot exceed 100." << endl;
            i--;
            continue;
        }
        totalMarks += marks;
    }

    double average = totalMarks / (double)numSubjects;

    cout << "The Total Marks: " << totalMarks << endl;
    cout << "Your Average is: " << average << endl;

    if (average >= 90 && average <= 100) {
        cout << "YOU GOT A GRADE" << endl;
    }
    else if (average >= 75) {
        cout << "YOU GOT B GRADE" << endl;
    }
    else if (average >= 50) {
        cout << "YOU GOT C GRADE" << endl;
    }
    else {
        cout << "YOU GOT D GRADE" << endl;
    }

    return 0;
}
