#include <iostream>
#include "Asus/Asus.h"
#include "Acer/Acer.h"
#include "Vivobook/Vivobook.h"

int main() {
/*
    Asus * asus = new Asus(100, true, "Intel", true, "Air");

    asus->PowerOn();
    std::cout << std::endl;
    std::cout << asus->GetCoolingType();
    std::cout << std::endl;
    std::cout << asus->GetIsErgonomic();
    std::cout << std::endl;
    asus->PowerOff();
    std::cout << std::endl;

    Acer * acer = new Acer(100, false, "AMD", "OpenSUSE", "China");

    acer->PowerOn();
    std::cout << std::endl;
    std::cout << acer->GetBaseOs();
    std::cout << std::endl;
    std::cout << acer->GetCountryManufacturer();
    std::cout << std::endl;
    acer->PowerOff();
    std::cout << std::endl;
*/
    auto * vivobook = new VivoBook("Red", true, true);

    DisplayAttributes(*vivobook);

    return 0;
}
