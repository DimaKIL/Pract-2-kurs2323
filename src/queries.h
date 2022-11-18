#include <vector>
#include "DataModels/Invoice.h"

#ifndef UNTITLED5_QUERIES_H
#define UNTITLED5_QUERIES_H

vector<Client> first(const vector<Invoice>& invoices);
vector<Invoice> second(const vector<Invoice>& invoices);
vector<Car> third(const vector<Invoice>& invoices);
vector<Car> fourth(const vector<Invoice>& invoices, string company_name);
Invoice fifth(const vector<Invoice>& invoices, uint32_t client_id);
float sixth(const vector<Invoice>& invoices);
vector<Invoice> seventh(const vector<Invoice>& invoices, string color_name);
vector<Invoice> eighth(vector<Invoice>& invoices, uint32_t client_id, const string& new_client_phone);
vector<Invoice> ninth(vector<Invoice>& invoices);
vector<Model> tenth(vector<Invoice>& invoices);
vector<Invoice> eleventh(const vector<Invoice>& invoices, uint32_t client_id);
vector<Invoice> twelfth(const vector<Invoice>& invoices);
Car thirteenth(const vector<Invoice>& invoices);
uint32_t fourteenth(const vector<Invoice>& invoices);
string fifteenth(const vector<Invoice>& invoices);

#endif //UNTITLED5_QUERIES_H
