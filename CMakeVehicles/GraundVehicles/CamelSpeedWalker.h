#pragma once
#include "GraundVehicles.h"

namespace DynamicVehicles {
	class CamelSpeedWalker : public GraundVehicles {
	public:
		CamelSpeedWalker(int distance_);
		VEHICLESLIBRARY_API int calculateTime() override;
	};
}