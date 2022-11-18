#include "Color.h"

ostream &operator<<(ostream &os, const Color &color) {
    return os << color.color_id << DELIMITER << color.color_name.size() << DELIMITER << color.color_name << DELIMITER;
}

istream &operator>>(istream &is, Color &color) {
    is > color.color_id;
    is > color.color_name;

    return is;
}

void Color::print() {
    cout << "Color | ID: " << color_id << " | Name: " << color_name << endl;
}
