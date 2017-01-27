#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade = 0;
    cout << "Input grade: ", cin >> grade;
    string lettergrade = (grade < 60) ? scores[0] : scores[(grade-50)/10];
    cout << "Lettergrade: " << lettergrade << endl;
    return 0;
}