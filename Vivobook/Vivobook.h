//
// Created by cigan on 4/10/2021.
//

#ifndef TEMADOI_VIVOBOOK_H
#define TEMADOI_VIVOBOOK_H


#include <iostream>
#include <string>

class VivoBook {
private:
    std::string Color{};
    bool IsErgoLiftHinge{};
    bool IsNanoEdgeDisplay{};

    friend void DisplayAttributes(const VivoBook& vivobook);

public:
    VivoBook(std::string Color, bool IsErgoLiftHinge, bool IsNanoEdgeDisplay);

    ~VivoBook();
};


#endif //TEMADOI_VIVOBOOK_H
