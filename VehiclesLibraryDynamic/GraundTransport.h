#pragma once
#include "DynamicVehicles.h"

namespace DynamicVehicles {
	class GraundTransport : public DynamicVehicles::Vehicles {
	protected:
		VEHICLESLIBRARY_API int setTimeBeforeRest(int timeBeforeRest_);
		VEHICLESLIBRARY_API int setRestPeriod(int restPeriod_);
	};
}