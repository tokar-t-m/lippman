#ifndef WORD_TRANSFORM
#define WORD_TRANSFORM

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> buildMap(std::ifstream &map_file);
const std::string& transform (const std::string& s, const std::unordered_map<std::string, std::string>& m);
void word_transform(std::ifstream& map_file, std::ifstream& input);

#endif