#include <cstdint>
#include <iostream>
#include <fstream>
#include <string>

#define DELIMITER "\t"

using namespace std;

#ifndef UNTITLED5_UTILS_H
#define UNTITLED5_UTILS_H

void skip_delimeter(istream &is);

void operator>(istream &is, string &destination);

void operator>(istream &is, uint32_t &destination);

#endif //UNTITLED5_UTILS_H
