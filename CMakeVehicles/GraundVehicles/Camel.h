#pragma once
#include "GraundVehicles.h"

namespace DynamicVehicles {
	class Camel : public DynamicVehicles::GraundVehicles {
	public:
		Camel(int distance_);
		VEHICLESLIBRARY_API int calculateTime() override;
	};


}