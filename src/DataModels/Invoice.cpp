#include "Invoice.h"

ostream &operator<<(ostream &os, Invoice &invoice) {
    Car *car = &invoice;
    os << *car;

    Client *client = &invoice;
    os << *client;

    return os << invoice.invoice_id << DELIMITER << invoice.invoice_date.size() << DELIMITER << invoice.invoice_date
              << DELIMITER;
}

istream &operator>>(istream &is, Invoice &invoice) {
    Car *car = &invoice;
    is >> *car;

    Client *client = &invoice;
    is >> *client;

    is > invoice.invoice_id;
    is > invoice.invoice_date;

    return is;
}

void Invoice::print() {
    cout << "Invoice | " << "ID: " << invoice_id << " | Date: " << invoice_date << endl;
}

void Invoice::print_all() {
    Invoice::print();
    Client::print();
    Car::print();
    Color::print();
    Model::print();
    Company::print();

}

string Invoice::getDate() {
    return invoice_date;
}
