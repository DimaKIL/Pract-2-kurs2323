#include "Car.h"
#include "Client.h"

#ifndef UNTITLED5_INVOICE_H
#define UNTITLED5_INVOICE_H

class Invoice : public Car, public Client {
private:
    uint32_t invoice_id = 2;
    string invoice_date;
public:
    Invoice() = default;

    Invoice(uint32_t companyId, const string &companyName, uint32_t modelId, const string &modelName, uint32_t maxSpeed,
            uint32_t seatsCount, uint32_t engineCm3Count, uint32_t colorId, const string &colorName, uint32_t carId,
            uint32_t carProductionYear, uint32_t carUsage, uint32_t carPrice, uint32_t clientId,
            const string &clientName, const string &clientAddress, const string &clientPhone, const string &clientNotes,
            uint32_t invoiceId, string invoiceDate) : Car(companyId, companyName, modelId, modelName, maxSpeed,
                                                          seatsCount, engineCm3Count,
                                                          colorId, colorName, carId, carProductionYear, carUsage,
                                                          carPrice),
                                                      Client(clientId, clientName, clientAddress, clientPhone,
                                                             clientNotes),
                                                      invoice_id(invoiceId), invoice_date(std::move(invoiceDate)) {}

    friend ostream &operator<<(ostream &os, Invoice &invoice);

    friend istream &operator>>(istream &is, Invoice &invoice);

    void print();
    void print_all();
    string getDate();
};


#endif //UNTITLED5_INVOICE_H
