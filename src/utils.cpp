#include "utils.h"

void skip_delimeter(istream& is) {
    char delim;
    is.get(delim);
    if (delim != '\t') {
        exit(-1);
    };
}

void operator> (istream& is, string& destination) {
    uint32_t string_size = 0;
    is >> string_size;

    skip_delimeter(is);

    destination.resize(string_size);
    is.read(&destination[0], string_size);
    skip_delimeter(is);
}

void operator> (istream& is, uint32_t& destination) {
    is >> destination;
    skip_delimeter(is);
}
