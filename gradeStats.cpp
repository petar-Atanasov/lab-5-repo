#include <iostream> 
#include <array>

using namespace std;

int main () { 

    const int maxGrades = 100;
    int grades[maxGrades];
    int numOfGrades = 0; 
    int grade;

    cout << "Enter grade ( or -1 to end): ";
    cin >> grade; 
    
    while ( grade != -1){
    if ( numOfGrades < maxGrades) {
        grades[numOfGrades] = grade;
        numOfGrades++;
        } else {
            cout << " The program reached it's maximum." 
            << "Goodbye...." << endl;
            exit(0);
        }
        cout << "Enter grade ( or -1 to end): ";
        cin >> grade;
    }
    if ( numOfGrades == 0) {
        cout << "Enter grade..." << endl;
    } else {
        int sum = 0;
        for ( int i = 0; i < numOfGrades; i++){
            sum = sum + grades[i];
        }
        double avarage = sum / numOfGrades;
        cout << "The avarage is " << avarage << '\n';
    }

    return 0;
}