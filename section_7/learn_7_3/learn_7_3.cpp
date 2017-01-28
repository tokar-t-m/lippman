#include <iostream>
#include <string>
#include "Sales_data.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char *argv[]){
    Sales_data total;
    
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
	Sales_data trans;
	while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
	    if(total.isbn() == trans.isbn()){
		total.combine(trans);
	    }else{
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
		total.bookNo = trans.bookNo;
		total.units_sold = trans.units_sold;
		total.revenue = trans.revenue;
	    }
	}
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }else{
	cerr << "No data?1" << endl;
    }
    return 0;
}