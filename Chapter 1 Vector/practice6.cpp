#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Part A

    vector<vector<int> > grades = {
        {85, 90, 88},
        {72, 81, 79},
        {94, 91, 96}
    };

    // Part B

    cout << "Student 1's second quiz score is: " << grades[0][1] << endl; 
    cout << "Student 2's third quiz score is: " << grades.at(1).at(2) << endl;
    cout << "Student 3's first quiz score is:  " << grades[2].at(0) << endl;

    cout << endl;
    // Part C
    
    cout << "The number of students is: " << grades.size();
    cout << "The number of quiz scores stored for Student 1: " << grades.at(0).size() << endl;

    cout << endl;
    // Part D

    for(int i = 0; i < grades.size(); i++){
        cout << "Student " << i+1 << ": ";
        for(int j = 0; j < grades.size(); j++){
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }

    // Part E
    cout << endl;

    int studentNumber = 1;
    for(const auto &studentGrades : grades){
        cout << "Student " << studentNumber << ": " << endl; 
        for(const int &score : studentGrades){
            cout << score << " ";
        }
        cout << endl;
        studentNumber++;
    }

    // Part F
    cout << endl; 

    grades[1][0] = 77;

    cout << "Student 2: ";
    for(int i = 0; i < grades.size(); i++){
        cout << grades.at(1).at(i) << " ";
    }
    cout << endl;

    //Part G
    cout << endl;
    float studentAverage = 0;
    for(int i = 0; i < grades.size(); i++){
        for(int j = 0; j < grades.size(); j++){
            studentAverage = studentAverage + grades[i][j];
        }
        studentAverage = studentAverage/3;
        cout << "Student " << i+1 << " average is: " << studentAverage << endl;
        studentAverage = 0;
    }

}