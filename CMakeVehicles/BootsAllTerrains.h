#pragma once
#include "GraundTransport.h"

namespace DynamicVehicles {
	class BootsAllTerrains : public GraundTransport {
	public:
		BootsAllTerrains();
		VEHICLESLIBRARY_API int Calculate(int distance) override;
	};
}