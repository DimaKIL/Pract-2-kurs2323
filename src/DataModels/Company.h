#include "../utils.h"

#ifndef UNTITLED5_COMPANY_H
#define UNTITLED5_COMPANY_H

using namespace std;

class Company {
private:
    uint32_t company_id = 0;
    string company_name;

public:
    Company() = default;

    Company(uint32_t company_id, string company_name);

    friend ostream &operator<<(ostream &os, const Company &company);

    friend istream &operator>>(istream &is, Company &company);

    void print();

    string getCompanyName();
};

#endif //UNTITLED5_COMPANY_H
