#include <iostream>
#include <set>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    std::set<Sales_data, decltype(compareIsbn)*> bookstore1(compareIsbn);
    return 0;
}