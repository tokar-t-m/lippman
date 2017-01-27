#define STRBLOB
#ifndef STRBLOB

#include <vector>
#include <string>
#include <memory>
#include <exception>
#include <initializer_list>

class StrBlob {
    public:
	using size_type = std::vector<std::string>::size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	
	void push_back(const std::string &t) { data->push_back(); }
	vaid pop_back();
	
	std::string& front();
	std::string& back();
    private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string& msg) const;
}

#endif