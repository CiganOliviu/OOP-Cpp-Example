//
// Created by cigan on 4/10/2021.
//

#ifndef TEMADOI_ACER_H
#define TEMADOI_ACER_H


#include "../Laptop/Laptop.h"

class Acer : public Laptop {
private:
    std::string BaseOs{};
    std::string CountryManufacturer{};

public:
    Acer(int batteryLevel, bool gamingMode, std::string processor,
         std::string BaseOs, std::string CountryManufacturer);

    std::string GetBaseOs();
    std::string GetCountryManufacturer();

    ~Acer();
};


#endif //TEMADOI_ACER_H
