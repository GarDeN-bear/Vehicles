#pragma once
#include "../DynamicVehicles/DynamicVehicles.h"

namespace DynamicVehicles {
	// Абстрактный родительский класс воздушных транспортных средств
	class AirVehicles : public Vehicles {
	protected:
		float distanceReductionFactor; // Коэффициент сокращения расстояния
	};
}