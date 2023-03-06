#pragma once
#include "GraundTransport.h"

namespace DynamicVehicles {
	class Centaur : public GraundTransport {
	public:
		Centaur();
		VEHICLESLIBRARY_API int Calculate(int distance) override;
	};
}