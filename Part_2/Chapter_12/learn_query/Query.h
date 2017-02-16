#ifndef QUERY
#define QUERY

#include <fstream>
#include <sstream>
#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class QueryResult;

class TextQuery {
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream &is);
	QueryResult query(const string&) const;
private:
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<line_no>>> wm;
};

class QueryResult{
	friend ostream& print(ostream&, const QueryResult&);
	using line_no = vector<string>::size_type;
public:
	QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f): sought(s), lines(p), file(f) { }
private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string>> file;
};

ostream& print(ostream&, const QueryResult&);
string make_plural(size_t ctr, const string &word, const string &ending);

#endif