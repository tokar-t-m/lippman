#include <iostream>
#include <set>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    std::multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
    std::multiset<Sales_data, decltype(compareIsbn)*>::const_iterator it_beg = bookstore.cbegin();
    return 0;
}