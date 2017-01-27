#include <iostream>
#include "Account.h"

int main(int argc, char *argv[]){
    Account::rate(10);
    double r = Account::rate();
    std::cout << r << std::endl;
    return 0;
}