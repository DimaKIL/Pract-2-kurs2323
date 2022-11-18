#include "Client.h"

#include <utility>

ostream &operator<<(ostream &os, Client &client) {
    return os << client.client_id << DELIMITER << client.client_name.size() << DELIMITER << client.client_name
              << DELIMITER
              << client.client_address.size() << DELIMITER << client.client_address << DELIMITER
              << client.client_phone.size() << DELIMITER << client.client_phone << DELIMITER
              << client.client_notes.size() << DELIMITER << client.client_notes << DELIMITER;
}

istream &operator>>(istream &is, Client &client) {
    is > client.client_id;

    is > client.client_name;
    is > client.client_address;
    is > client.client_phone;
    is > client.client_notes;

    return is;
}

void Client::print() {
    cout << "Client | ID: " << client_id << " | Name: " << client_name << " | Address: " << client_address
    << " | Phone: " << client_phone << " | Notes: " << client_notes << endl;

}

string Client::getPhone() {
    return client_phone;
}

string Client::getName() {
    return client_name;
}

uint32_t Client::getClientId() {
    return client_id;
}

void Client::setClientPhone(string new_phone) {
    client_phone = std::move(new_phone);
}
