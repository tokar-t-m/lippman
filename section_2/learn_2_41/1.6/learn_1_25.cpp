#include <iostream>
#include <string>
#include "../Sales_data.h"

using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::string;

int main(int argc, char *argv[]){
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
	Sales_data trans;
	while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
	    if(total.bookNo == trans.bookNo){
		total.units_sold += trans.units_sold;
		total.revenue += trans.units_sold;
	    }else{
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
		total.bookNo = trans.bookNo;
		total.units_sold = trans.units_sold;
		total.revenue = trans.revenue;
	    }
	}
	cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }else{
	cerr << "No data?!" << endl;
	return -1;
    }
    return 0;
}
