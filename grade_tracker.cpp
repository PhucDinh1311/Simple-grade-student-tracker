#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string names[100];
    float scores[100];
    float total = 0;
    float highest;
    string topStudent;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " name: ";
        cin >> names[i];

        cout << "Student " << i + 1 << " score: ";
        cin >> scores[i];

        total += scores[i];

        if (i == 0 || scores[i] > highest) {
            highest = scores[i];
            topStudent = names[i];
        }
    }

    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " - " << scores[i] << endl;
    }

    cout << "\nAverage score: " << total / n << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Top student: " << topStudent << endl;

    return 0;
}