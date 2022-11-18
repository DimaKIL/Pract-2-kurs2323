#include "../utils.h"
#include "Model.h"
#include "Color.h"

#ifndef UNTITLED5_CAR_H
#define UNTITLED5_CAR_H


class Car : public Model, public Color {
private:
    uint32_t car_id = 0;
    uint32_t car_production_year = 0;
    uint32_t car_usage = 0;
    uint32_t car_price = 0;
public:
    Car() = default;
    Car(uint32_t companyId, const string &companyName, uint32_t modelId, const string &modelName, uint32_t maxSpeed,
        uint32_t seatsCount, uint32_t engineCm3Count, uint32_t colorId, const string &colorName, uint32_t carId,
        uint32_t carProductionYear, uint32_t carUsage, uint32_t carPrice);

    friend ostream& operator<< (ostream& os, Car& car);
    friend istream& operator>> (istream& is, Car& car);

    void print();

    uint32_t getCarProductionYear();
    uint32_t getCarPrice();
    uint32_t setCarPrice(uint32_t new_car_price);
};

#endif //UNTITLED5_CAR_H
