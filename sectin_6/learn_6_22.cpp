#include <iostream>

using std::cout;
using std::endl;

void swap_valuePointer(int *point1, int *point2){
    int tmp_point = *point1;
    *point1 = *point2;
    *point2 = tmp_point;
}

void swap_adressPointer(int* &point1, int* &point2){
    int *tmp_point = point1;
    point1 = point2;
    point2 = tmp_point;
}

int main(int argc, char *argv[]){
    int item1 = 10, item2 = 20;
    int *pitem1 = &item1, *pitem2 = &item2;

    cout << item1 << " " << item2 << endl;
    swap_valuePointer(&item1, &item2);
    cout << item1 << " " << item2 << endl;

    swap_valuePointer(pitem1, pitem2);
    cout << *pitem1 << " " << *pitem2 << endl;

    swap_adressPointer(pitem1, pitem2);
    cout << *pitem1 << " " << *pitem2 << endl;
    return 0;
}