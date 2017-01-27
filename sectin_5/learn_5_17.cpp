#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    vector<int> v2{0, 1, 1, 2}, v1{0, 1, 1, 2, 3, 5, 8};
    
    vector<int>::size_type vector_min_size = v1.size(), cnt = 0;
    if(v2.size() < vector_min_size)
	vector_min_size = v2.size();

    for(vector<int>::size_type i1 = 0, i2 = 0; i1 != vector_min_size && i2 != vector_min_size; ++i1, ++i2){
        if(v1[i1] == v2[i2]){
	    ++cnt;
	}else{
	    cout << "No!" << endl;
	    break;
	}
    }

    cout << "Vector V1 prefix V2: " << cnt << " element" 
	 << "\ntrue!!!" << endl;
    return 0;
}
