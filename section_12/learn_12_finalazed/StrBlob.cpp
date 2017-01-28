#include "StrBlob.h"

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }
//StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) { }



void StrBlob::check(size_type i, const std::string& msg) const {
    if(i >= data->size())
	throw out_of_range(msg);
}