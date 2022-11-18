#include "Company.h"

Company::Company(uint32_t company_id, string company_name) : company_id{company_id},
                                                             company_name{std::move(company_name)} {}

ostream &operator<<(ostream &os, const Company &company) {
    return os << company.company_id << DELIMITER << company.company_name.size() << DELIMITER << company.company_name
              << DELIMITER;
}

istream &operator>>(istream &is, Company &company) {
    is > company.company_id;
    is > company.company_name;

    return is;
}

void Company::print() {
    cout << "Company | ID: " << company_id << " | Name: " << company_name << endl;
}

string Company::getCompanyName() {
    return company_name;
}
