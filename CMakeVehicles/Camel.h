#pragma once
#include "GraundTransport.h"

namespace DynamicVehicles {
	class Camel : public DynamicVehicles::GraundTransport {
	public:
		Camel();
		VEHICLESLIBRARY_API int Calculate(int distance) override;
	};
}