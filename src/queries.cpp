#include "queries.h"
#include <chrono>
#include <map>
#include "algorithm"

using namespace std;

bool compare_client_names(Client c1, Client c2) {
    return c1.getName().compare(c2.getName()) < 0;
}

vector<Client> first(const vector<Invoice>& invoices) {
    vector<Client> result;

    for (auto invoice : invoices) {
        if (invoice.getPhone().empty()) {
            result.push_back(invoice);
        }
    }

    sort(result.begin(), result.end(), compare_client_names);

    return result;
}

vector<Invoice> second(const vector<Invoice>& invoices) {
    vector<Invoice> result;
    auto time_point_now = std::chrono::system_clock::now();
    time_t tt_now = std::chrono::system_clock::to_time_t(time_point_now);
    tm utc_tm_now = *gmtime(&tt_now);

    string year_now = to_string(utc_tm_now.tm_year + 1900);


    for (auto invoice : invoices) {
        if (invoice.getDate().find(year_now) != string::npos && invoice.getDate().at(5) == '0' && invoice.getDate().at(6) == '3') {
            result.push_back(invoice);
        }
    }

    return result;
}

vector<Car> third(const vector<Invoice>& invoices) {
    vector<Car> result;

    for (auto invoice : invoices) {
        if (invoice.getCarProductionYear() == 2010 && invoice.getCarPrice() < 70000) {
            result.push_back(invoice);
        }
    }

    return result;
}

vector<Car> fourth(const vector<Invoice>& invoices, string company_name) {
    vector<Car> result;

    for (auto invoice : invoices) {
        if (invoice.getCompanyName().compare(company_name) == 0) {
            result.push_back(invoice);
        }
    }

    return result;
}

Invoice fifth(const vector<Invoice>& invoices, uint32_t client_id) {
    Invoice result;

    for (auto invoice : invoices) {
        if (invoice.getClientId() == client_id) {
            result = invoice;
        }
    }

    return result;
}

float sixth(const vector<Invoice>& invoices) {
    uint32_t sum = 0;
    uint32_t toyota_car_count = 0;

    for (auto invoice : invoices) {
        if (invoice.getCompanyName() == "Toyota") {
            sum += invoice.getCarPrice();
            toyota_car_count++;
        }
    }

    return (float) sum / (float) toyota_car_count;
}

vector<Invoice> seventh(const vector<Invoice>& invoices, string color_name) {
    return invoices;
}

vector<Invoice> eighth(vector<Invoice>& invoices, uint32_t client_id, const string& new_client_phone){
    for (auto& invoice : invoices) {
        if (invoice.getClientId() == client_id) {
            invoice.setClientPhone(new_client_phone);
        }
    }

    return invoices;
}

vector<Invoice> ninth(vector<Invoice>& invoices) {
    for (auto& invoice : invoices) {
        invoice.setCarPrice(invoice.getCarPrice() * 1.1);
    }

    return invoices;
}

vector<Model> tenth(vector<Invoice>& invoices) {
    vector<Model> result;

    for (auto invoice : invoices) {
        if (invoice.getCompanyName() == "Toyota") {
            result.push_back(invoice);
        }
    }

    return result;
}

vector<Invoice> eleventh(const vector<Invoice>& invoices, uint32_t client_id) {
    vector<Invoice> result;

    for (auto invoice : invoices) {
        if (invoice.getClientId() != client_id) {
            result.push_back(invoice);
        }
    }

    return result;
}

vector<Invoice> twelfth(const vector<Invoice>& invoices) {
    vector<Invoice> result;

    for (auto invoice : invoices) {
        if (invoice.getCompanyName() != "Toyota") {
            result.push_back(invoice);
        }
    }

    return result;
}

Car thirteenth(const vector<Invoice> &invoices) {
    Car result;
    uint32_t cheapest_price = UINT32_MAX;

    for (auto invoice : invoices) {
        if (invoice.getCarPrice() < cheapest_price) {
            cheapest_price = invoice.getCarPrice();
            result = invoice;
        }
    }

    return result;
}

uint32_t fourteenth(const vector<Invoice>& invoices) {
    uint32_t sum = 0;

    for (auto invoice : invoices) {
        if (invoice.getCarProductionYear() == 2012) {
            sum += invoice.getCarPrice();
        }
    }

    return sum;
}

string fifteenth(const vector<Invoice>& invoices) {
    map<string, int> company_popularity;
    using pair_type = decltype(company_popularity)::value_type; // вивід типу пари мапи

    for (auto invoice : invoices) {
        company_popularity[invoice.getCompanyName()]++;
    }

    string top_company_name = std::max_element(
            std::begin(company_popularity), std::end(company_popularity),
            [] (const pair_type & p1, const pair_type & p2) {
                        return p1.second < p2.second;
                    }
            ) -> first;

    return top_company_name;
}
