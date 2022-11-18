#include "../utils.h"

#ifndef UNTITLED5_COLOR_H
#define UNTITLED5_COLOR_H

class Color {
private:
    uint32_t color_id = 0;
    string color_name;
public:
    Color() = default;

    Color(uint32_t colorId, string colorName) : color_id(colorId), color_name(std::move(colorName)) {}

    friend ostream &operator<<(ostream &os, const Color &color);

    friend istream &operator>>(istream &is, Color &color);

    void print();
};

#endif //UNTITLED5_COLOR_H
