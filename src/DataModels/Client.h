#include "../utils.h"

#ifndef UNTITLED5_CLIENT_H
#define UNTITLED5_CLIENT_H

class Client {
private:
    uint32_t client_id = 1;
    string client_name;
    string client_address;
    string client_phone;
    string client_notes;
public:
    Client() = default;

    Client(uint32_t clientId, string clientName, string clientAddress, string clientPhone, string clientNotes)
            : client_id(clientId), client_name(std::move(clientName)), client_address(std::move(clientAddress)),
              client_phone(std::move(clientPhone)),
              client_notes(std::move(clientNotes)) {}

    friend ostream &operator<<(ostream &os, Client &client);

    friend istream &operator>>(istream &is, Client &client);

    void print();
    uint32_t getClientId();
    string getPhone();
    string getName();
    void setClientPhone(string new_phone);
};


#endif //UNTITLED5_CLIENT_H
