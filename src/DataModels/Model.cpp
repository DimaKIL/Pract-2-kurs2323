#include "Model.h"

Model::Model(uint32_t company_id, string company_name, uint32_t model_id, string modelName, uint32_t maxSpeed,
             uint32_t seatsCount, uint32_t engineCm3Count)
        : Company(company_id, std::move(company_name)), model_id{model_id},
          model_name(std::move(modelName)), max_speed(maxSpeed), seats_count(seatsCount),
          engine_cm3_count(engineCm3Count) {};

ostream &operator<<(ostream &os, Model &model) {
    Company *company = &model;
    os << *company;
    return os << model.model_id << DELIMITER << model.model_name.size() << DELIMITER << model.model_name << DELIMITER
              << model.max_speed << DELIMITER << model.door_count << DELIMITER << model.seats_count << DELIMITER
              << model.engine_cm3_count << DELIMITER;
}

istream &operator>>(istream &is, Model &model) {
    Company *company = &model;
    is >> *company;

    is > model.model_id;
    is > model.model_name;
    is > model.max_speed;
    is > model.door_count;
    is > model.seats_count;
    is > model.engine_cm3_count;

    return is;
}

void Model::print() {
//    Company::print();
    cout << "Model | ID: " << model_id << " | Name: " << model_name << " | Max speed: " << max_speed
    << " | Door count: " << door_count << " | Seats: " << seats_count << " | Volume: " << engine_cm3_count << endl;
}
