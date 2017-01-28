#include "word_transform.h"

int main(int argc, char *argv[]){
    std::ifstream map_file(argv[1]), text(argv[2]);
    if(map_file.is_open() && text.is_open())
	word_transform(map_file, text);
    else
	std::cerr << "Error open file!" << std::endl;
    return 0;
}