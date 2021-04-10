//
// Created by cigan on 4/10/2021.
//

#include "Asus.h"

#include <utility>

Asus::Asus(int batteryLevel, bool gamingMode, std::string processor, bool IsErgonomic, std::string CoolingType)
            : Laptop(batteryLevel, gamingMode, std::move(processor)) {
    this->IsErgonomic = IsErgonomic;
    this->CoolingType = std::move(CoolingType);
}

bool Asus::GetIsErgonomic() const {
    return this->IsErgonomic;
}

std::string Asus::GetCoolingType() {
    return this->CoolingType;
}

Asus::~Asus() = default;
