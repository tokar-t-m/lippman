#ifndef WORD_TRANSFORM
#define WORD_TRANSFORM

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

std::map<std::string, std::string> buildMap(std::ifstream &map_file);
const std::string& transform (const std::string& s, const std::map<std::string, std::string>& m);
void word_transform(std::ifstream& map_file, std::ifstream& input);

#endif