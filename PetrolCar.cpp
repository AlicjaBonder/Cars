#include "PetrolCar.hpp"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine *engine)
	: petrolEngine_(engine)
{
	std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()
{
	delete petrolEngine_;
	std::cout << __FUNCTION__ << std::endl;
}
void PetrolCar::addEnergy() { refuel(); }
void PetrolCar::refuel() { std::cout << __FUNCTION__ << std::endl; }
PetrolEngine *PetrolCar::changeEngine(int pow, float cap, int g)
{
	if (velocity== 0)
	{
		delete this->petrolEngine_;
		this->petrolEngine_ = new PetrolEngine(pow, cap, g);
		return this->petrolEngine_;
	}
	else
		std::cout << "Operacja niemozliwa" << std::endl;
}

int PetrolCar::getGear()
{
	return this->petrolEngine_->getCurrentGear();
}
void PetrolCar::setGear(int value)
{
	return this->petrolEngine_->changeGear(value);
}
