#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"

class HybridCar : public ElectricCar, public PetrolCar
{
public:
    HybridCar(PetrolEngine *petrolEng, ElectricEngine *electricEng);
    ~HybridCar();

	void changeEngine(int, int);
	void changeEngine(int, float, int);
    void addEnergy();
};
