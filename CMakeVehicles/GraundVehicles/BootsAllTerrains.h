#pragma once
#include "GraundVehicles.h"

namespace DynamicVehicles {
	class BootsAllTerrains : public GraundVehicles {
	public:
		BootsAllTerrains(int distance_);
		VEHICLESLIBRARY_API int calculateTime() override;
	};
}