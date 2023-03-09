#pragma once
#include "GraundVehicles.h"

namespace DynamicVehicles {
	class BootsAllTerrains : public GraundVehicles {
	public:
		BootsAllTerrains(float distance_);
		VEHICLESLIBRARY_API float calculateTime() override;
	};
}