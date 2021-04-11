//
// Created by cigan on 4/10/2021.
//

#include "Acer.h"

#include <utility>

Acer::Acer(int batteryLevel, bool gamingMode, std::string processor, std::string BaseOs, std::string CountryManufacturer)
            : Laptop(batteryLevel, gamingMode, std::move(processor)) {

    this->BaseOs = std::move(BaseOs);
    this->CountryManufacturer = std::move(CountryManufacturer);
}

std::string Acer::GetBaseOs() {
    return this->BaseOs;
}

std::string Acer::GetCountryManufacturer() {
    return this->CountryManufacturer;
}

Acer::~Acer() = default;
