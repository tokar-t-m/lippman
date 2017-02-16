#include <iostream>
#include <string>
#include "../Sales_data.h"

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    Sales_data prev, next;
    unsigned transCnt = 1;
    cin >> prev.bookNo >> prev.units_sold >> prev.revenue;
    while(cin >> next.bookNo >> next.units_sold >> next.revenue){
	if(next.bookNo == prev.bookNo){
	    ++transCnt;
	}else{
	    prev.bookNo = next.bookNo;
	    prev.units_sold = next.units_sold;
	    prev.revenue = next.revenue;
	    cout << "TransCnt: " << prev.bookNo << " " << prev.units_sold << " " << prev.revenue << " - " << transCnt << endl;
	    transCnt = 1;
	}
    }
    return 0;
}
