#pragma once
#include "../DynamicVehicles/DynamicVehicles.h"

namespace DynamicVehicles {
	class AirVehicles : public Vehicles {
	protected:
		float distanceReductionFactor; // Коэффициент сокращения расстояния
	};
}