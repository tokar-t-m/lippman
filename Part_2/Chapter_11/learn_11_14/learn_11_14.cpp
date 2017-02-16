#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>

using std::string;
using std::vector;
using std::pair;
using std::cout;
using std::endl;
using std::map;

void addFamily(map<string, vector<pair<string, string>>>& family, const string& surname);
void addFamily(map<string, vector<pair<string, string>>>& family, const string& surname, const string& children, const string& date);

int main(int argc, char *argv[]){
    map<string, vector<pair<string, string>>> family;
    addFamily(family, "Family1", "Children1", "Date1");
    addFamily(family, "Family2");
    addFamily(family, "Family1", "children2", "Date2");

    for(const auto& surname: family){
	cout << surname.first << ":" << endl;
	for(const auto& children_date: surname.second)
	    cout << "\t" << children_date.first << " : " << children_date.second << endl;
    }

    return 0;
}

void addFamily(map<string, vector<pair<string, string>>>& family, const string& surname){
    family[surname];
}

void addFamily(map<string, vector<pair<string, string>>>& family, const string& surname, const string& children, const string& date){
    family[surname].push_back({children, date});
}