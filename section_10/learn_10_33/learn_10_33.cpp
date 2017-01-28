#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main(int argc, char *argv[]){
    std::ifstream in_file(argv[1]);
    std::ofstream out_file1(argv[2]), out_file2(argv[3]);
    std::istream_iterator<int> in(in_file), eof;
    std::vector<int> ivec;
    copy(in, eof, back_inserter(ivec));
    std::ostream_iterator<int> out1(out_file1, " "), out2(out_file2, "\n");
    for(const auto& out: ivec)
	if(out % 2)
	    *out1++ = out;
	else
	    *out2++ = out;
    return 0;
}