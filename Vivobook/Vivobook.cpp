//
// Created by cigan on 4/10/2021.
//


#include "Vivobook.h"

VivoBook::VivoBook(std::string Color, bool IsErgoLiftHinge, bool IsNanoEdgeDisplay) {

    this->Color = std::move(Color);
    this->IsErgoLiftHinge = IsErgoLiftHinge;
    this->IsNanoEdgeDisplay = IsNanoEdgeDisplay;
}

void DisplayAttributes(const VivoBook& vivobook) {

    std::cout << vivobook.Color << std::endl;
    std::cout << vivobook.IsErgoLiftHinge << std::endl;
    std::cout << vivobook.IsNanoEdgeDisplay << std::endl;
}

VivoBook::~VivoBook() = default;
