//
// Created by cigan on 4/10/2021.
//

#ifndef TEMADOI_ASUS_H
#define TEMADOI_ASUS_H


#include "../Laptop/Laptop.h"

class Asus : public Laptop {

private:
    bool IsErgonomic{};
    std::string CoolingType{};

public:
    Asus(int batteryLevel, bool gamingMode, std::string processor, bool IsErgonomic, std::string CoolingType);

    [[nodiscard]] bool GetIsErgonomic() const;
    std::string GetCoolingType();

    ~Asus();
};


#endif //TEMADOI_ASUS_H
