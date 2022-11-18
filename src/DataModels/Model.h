#include "Company.h"

#ifndef UNTITLED5_MODEL_H
#define UNTITLED5_MODEL_H

class Model : public Company {
private:
    uint32_t model_id = 0;
    string model_name;
    uint32_t max_speed = 0;
    uint32_t door_count = 0;
    uint32_t seats_count = 0;
    uint32_t engine_cm3_count = 0;
public:
    Model() = default;

    Model(uint32_t company_id, string company_name, uint32_t model_id, string modelName, uint32_t maxSpeed,
          uint32_t seatsCount, uint32_t engineCm3Count);

    friend ostream &operator<<(ostream &os, Model &model);

    friend istream &operator>>(istream &is, Model &model);

    void print();
};


#endif //UNTITLED5_MODEL_H
