#include <iostream>
#include "Camel.h"
#include "CamelSpeedWalker.h"
#include "Centaur.h"
#include "BootsAllTerrains.h"

int main() {
	DynamicVehicles::Camel camel;
	DynamicVehicles::CamelSpeedWalker camelSpeedWalker;
	DynamicVehicles::Centaur centaur;
	DynamicVehicles::BootsAllTerrains bootsAllTerrains;
	std::cout << camel.Calculate(4500) << "\n";
	std::cout << camelSpeedWalker.Calculate(4500) << "\n";
	std::cout << centaur.Calculate(4500) << "\n";
	std::cout << bootsAllTerrains.Calculate(4500) << "\n";
}