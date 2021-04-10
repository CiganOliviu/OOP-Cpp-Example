//
// Created by cigan on 4/10/2021.
//

#include "Laptop.h"

#include <utility>

Laptop::Laptop(int BatteryLevel, bool GamingMode, std::string Processor) {

    processor = new class Processor();

    this->BatteryLevel = BatteryLevel;
    this->GamingMode = GamingMode;
    this->Processor = std::move(Processor);
    this->CpuSpeed = processor->CpuSpeed;
}

void Laptop::PowerOn() {

    std::cout << "Power On!!!";
}

void Laptop::PowerOff() {

    std::cout << "Power Off!!!";
}

Laptop::~Laptop() = default;
