#pragma once

class PetrolEngine
{
public:
    PetrolEngine(int power, float capacity, int gears);
    ~PetrolEngine();
    void changeGear(int gear);
    int getCurrentGear();

    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};
