//
// Created by cigan on 4/10/2021.
//

#ifndef TEMADOI_LAPTOP_H
#define TEMADOI_LAPTOP_H

#include <iostream>
#include "../Computer.h"
#include "../Processor.h"

class Laptop : public Computer {

private:
    int BatteryLevel;
    bool GamingMode;
    std::string Processor;
    int CpuSpeed;

    class Processor * processor;

public:

    Laptop(int BatteryLevel, bool GamingMode, std::string Processor);

    void PowerOn() override;
    void PowerOff() override;

    ~Laptop();
};


#endif //TEMADOI_LAPTOP_H
