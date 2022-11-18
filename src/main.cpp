#include "DataModels/Invoice.h"
#include "queries.h"
#include "seed_database.h"

using namespace std;

vector<Invoice> get_all_invoices() {
    vector<Invoice> invoices;
    Invoice temp;

    fstream in("database.txt", ios::in);
    if (in.is_open()) {

        while (in.peek() != -1) {
            in >> temp;
            invoices.push_back(temp);
            in.get(); // reed new line 

            if (in.eof()) break;
        }
    }

    in.close();
    return invoices;
}

void save_database(const vector<Invoice>& invoices) {
    fstream out("database.txt", ios::out);
    if (out.is_open()) {
        for (auto invoice : invoices) {
            out << invoice;
            out << '\n';
        };
        out.close();
    }
}

void init_database() {
    fstream out("database.txt", ios::out);
    if (out.is_open()) {
        for (auto invoice : seed_database()) {
            out << invoice;
            out << '\n';
        };
        out.close();
    }
}

int main() {
    // init_database();

    vector<Invoice> invoices = get_all_invoices();

    cout << "CURRENTLY STORED RECORDS:" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    for (auto invoice : invoices) {
        invoice.print_all();
        cout << "==========================================================" << endl;

    }

    uint32_t client_id = 0;
    string new_phone, new_color, company_name;

    uint32_t choice = 0;

    cout << "0. Add new Invoice record to the database" << endl;
    cout << "1. Gel alphabetically sorted clients who have no phone number" << endl;
    cout << "2. Get invoices from this year's March" << endl;
    cout << "3. Get cars manufactured in 2010 and which price is <70k UAH" << endl;
    cout << "4. Get cars by company name" << endl;
    cout << "5. Get invoice by client ID" << endl;
    cout << "6. Get Toyota average car price" << endl;
    cout << "7. Add new color" << endl;
    cout << "8. Change phone by client ID" << endl;
    cout << "9. Update price by increasing them by 10%" << endl;
    cout << "10. Get copy of Toyota cars" << endl;
    cout << "11. Filter out records by client ID" << endl;
    cout << "12. Filter out Toyota records" << endl;
    cout << "13. Get cheapest car" << endl;
    cout << "14. Total price of cars sold in 2012" << endl;
    cout << "15. Get most popular car company" << endl;

    cout << "Select one option from 1 to 15: ";
    cin >> choice;

    switch (choice) {
        case 0: {
            uint32_t companyId, modelId, maxSpeed, seatsCount, engineCm3Count, colorId, carId, carProductionYear, carUsage, carPrice, clientId, invoiceId;
            string companyName, modelName, colorName, clientName, clientAddress, clientPhone, clientNotes, invoiceDate;

            cout << "Enter company ID: ";
            cin >> companyId;
            cout << endl;

            cout << "Enter companyName: ";
            cin >> companyName;
            cout << endl;

            cout << "Enter modelId: ";
            cin >> modelId;
            cout << endl;

            cout << "Enter modelName: ";
            cin >> modelName;
            cout << endl;

            cout << "Enter maxSpeed: ";
            cin >> maxSpeed;
            cout << endl;

            cout << "Enter seatsCount: ";
            cin >> seatsCount;
            cout << endl;

            cout << "Enter engineCm3Count: ";
            cin >> engineCm3Count;
            cout << endl;

            cout << "Enter colorId: ";
            cin >> colorId;
            cout << endl;

            cout << "Enter colorName: ";
            cin >> colorName;
            cout << endl;

            cout << "Enter carId: ";
            cin >> carId;
            cout << endl;

            cout << "Enter carProductionYear: ";
            cin >> carProductionYear;
            cout << endl;

            cout << "Enter carUsage: ";
            cin >> carUsage;
            cout << endl;

            cout << "Enter carPrice: ";
            cin >> carPrice;
            cout << endl;

            cout << "Enter clientId: ";
            cin >> clientId;
            cout << endl;

            cout << "Enter clientName: ";
            cin >> clientName;
            cout << endl;

            cout << "Enter clientAddress: ";
            cin >> clientAddress;
            cout << endl;

            cout << "Enter clientPhone: ";
            cin >> clientPhone;
            cout << endl;

            cout << "Enter clientNotes: ";
            cin >> clientNotes;
            cout << endl;

            cout << "Enter invoiceId: ";
            cin >> invoiceId;
            cout << endl;

            cout << "Enter invoiceDate: ";
            cin >> invoiceDate;
            cout << endl;

            Invoice invoice(companyId, companyName, modelId, modelName, maxSpeed,
                            seatsCount, engineCm3Count, colorId, colorName, carId,
                            carProductionYear, carUsage, carPrice, clientId,
                            clientName, clientAddress, clientPhone, clientNotes,
                            invoiceId, invoiceDate);

            invoices.push_back(invoice);
            save_database(invoices);
        }
        case 1: {
            for (auto record : first(invoices)) {
                record.print();
            }
            break;
        }
        case 2: {
            for (auto record : second(invoices)) {
                record.print();
            }
            break;
        }
        case 3: {
            for (auto record : third(invoices)) {
                record.print();
            }
            break;
        }
        case 4:
        {
            cout << "Enter company name: ";
            cin >> company_name;
            for (auto record : fourth(invoices, company_name)) {
                record.print();
            }
            break;
        }
        case 5:{
            cout << "Enter client ID: ";
            cin >> client_id;

            fifth(invoices, client_id).print();

            break;
        }

        case 6:{
            cout << "Average Toyota price: " << sixth(invoices) << endl;
            break;
        }

        case 7: {
            cout << "Input new color name: ";
            cin >> new_color;
            for (auto record : seventh(invoices, new_color)) {
                record.print();
            }
            break;
        }
        case 8: {
            cout << "Enter client ID: ";
            cin >> client_id;
            cout << "New phone: ";
            cin >> new_phone;
            for (auto record : eighth(invoices, client_id, new_phone)) {
                record.print();
            }

            save_database(invoices);
            break;
        }
        case 9: {
            for (auto record : ninth(invoices)) {
                record.print();
            }

            save_database(invoices);
            break;
        }
        case 10: {
            for (auto record : tenth(invoices)) {
                record.print();
            }
            break;
        }
        case 11: {
            cout << "Enter client ID: ";
            cin >> client_id;
            for (auto record : eleventh(invoices, client_id)) {
                record.print();
            }
            break;
        }
        case 12: {
            for (auto record : twelfth(invoices)) {
                record.print();
            }
            break;
        }
        case 13: {
            thirteenth(invoices).print();
            break;
        }
        case 14: {
            cout << "Total sold car price: " << fourteenth(invoices) << endl;
            break;
        }
        case 15: {
            cout << "Most popular car company: " << fifteenth(invoices) << endl;
            break;
        }
        default:
            cout << "Wrong choice!" << endl;
            break;
    }

    cout << "Press any key to end the program: " << endl;
    system("pause");

    return 0;
}
