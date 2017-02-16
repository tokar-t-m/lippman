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
    string lettergrade;
    int grade = 0;
    cout << "Input grade: ", cin >> grade;
    if(grade < 60)
	lettergrade = scores[0];
    else
	lettergrade = scores[(grade - 50)/10];
    cout << "Lettergrade: " << lettergrade << endl;
    return 0;
}