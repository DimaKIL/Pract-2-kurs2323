#include "Car.h"

Car::Car(uint32_t companyId, const string &companyName, uint32_t modelId, const string &modelName, uint32_t maxSpeed,
         uint32_t seatsCount, uint32_t engineCm3Count, uint32_t colorId, const string &colorName, uint32_t carId,
         uint32_t carProductionYear, uint32_t carUsage, uint32_t carPrice)
        : Model(companyId, companyName, modelId, modelName, maxSpeed, seatsCount, engineCm3Count),
          Color(colorId, colorName), car_id(carId), car_production_year(carProductionYear), car_usage(carUsage),
          car_price(carPrice) {}


ostream &operator<<(ostream &os, Car &car) {
    Model *model = &car;
    os << *model;

    Color *color = &car;
    os << *color;

    return os << car.car_id << DELIMITER << car.car_production_year << DELIMITER << car.car_usage << DELIMITER
              << car.car_price << DELIMITER;
}

istream &operator>>(istream &is, Car &car) {
    Model *model = &car;
    is >> *model;

    Color *color = &car;
    is >> *color;

    is > car.car_id;
    is > car.car_production_year;
    is > car.car_usage;
    is > car.car_price;

    return is;
}

void Car::print() {
//    Model::print();
//    Color::print();

    cout << "Car | ID: " << car_id << " | Year: " << car_production_year << " | Usage: " << car_usage
    << " | Price: " << car_price << endl;
}

uint32_t Car::getCarProductionYear() {
    return car_production_year;
}

uint32_t Car::getCarPrice() {
    return car_price;
}

uint32_t Car::setCarPrice(uint32_t new_car_price) {
    return car_price = new_car_price;
}

