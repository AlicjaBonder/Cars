#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"
#include <iostream>
#include <cassert>
#include <assert.h>

void test();

int main()
{
      test();
    Car *car = nullptr;
    std::cout << std::endl
              << "OPEL" << std::endl;
    PetrolCar opel(new PetrolEngine(120, 1800, 6));
    car = &opel;
    car->accelerate(50);
    std::cout << "Velocity = " << car->getVelocity() << std::endl;

    car->brake();
    car->accelerate(-900);
    car->addEnergy();
    opel.setGear(2);
    std::cout << "Velocity = " << car->getVelocity() << std::endl;

    std::cout << opel.getGear() << std::endl;
    opel.setGear(-1);
    std::cout << opel.getGear() << std::endl;

    std::cout << std::endl
              << "NISSAN" << std::endl;
    ElectricCar nissan(new ElectricEngine(130, 650));
    car = &nissan;
    car->addEnergy();
    car->accelerate(80);
    nissan.changeEngine(150, 700); // Changing an engine during driving is not safe
    car->turnLeft();
    car->accelerate(80);

    car->brake();

    std::cout << std::endl
              << "TOYOTA" << std::endl;
    HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));
    car = &toyota;
    car->accelerate(100);
    car->brake();
    std::cout << "Velocity = " << car->getVelocity() << std::endl;
    toyota.changeEngine(new PetrolEngine(100, 140, 4), new ElectricEngine(200, 800));
}

void test()
{
    
    PetrolCar opel(new PetrolEngine(120, 1800, 6));
    opel.accelerate(150);
    assert(opel.getVelocity() == 150);
    opel.accelerate(100);
    assert(opel.getVelocity() == 250);
    // opel.accelerate(-100);
    // assert(car->velocity == 0);
    opel.brake();
    assert(opel.getVelocity() == 0);
}