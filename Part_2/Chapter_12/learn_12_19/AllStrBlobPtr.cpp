#include "AllStrBlobPtr.h"

/* class StrBlob*/

//Конструкторы
StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) { }
StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) { }

//Доступ к элементам
std::string& StrBlob::front(){
	check(0, "front on empty StrBlob");
	return data->front();
}
std::string& StrBlob::back(){
	check(0, "back on empty StrBlob");
	return data->back();
}

//Константные методы доступа к элементам
std::string& StrBlob::front() const {
	check(0, "front on empty StrBlob");
	return data->front();
}
std::string& StrBlob::back() const {
	check(0, "back on empty StrBlob");
	return data->back();
}

//Добавление эментов
void StrBlob::pop_back(){
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

//Проверка интекса заданному диапазону
void StrBlob::check(size_type i, const std::string &msg) const {
	if(i >= data->size())
		throw std::out_of_range(msg);
}

/* class StrBlobPtr */

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string &msg) const {
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(!ret)
		throw std::out_of_range(msg);
	return ret;
}

std::string& StrBlobPtr::deref() const {
	auto p = check(curr, "deference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr(){
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}