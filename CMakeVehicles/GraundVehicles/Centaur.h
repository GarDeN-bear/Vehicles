#pragma once
#include "GraundVehicles.h"

namespace DynamicVehicles {
	class Centaur : public GraundVehicles {
	public:
		Centaur(int distance_);
		VEHICLESLIBRARY_API int calculateTime() override;
	};
}