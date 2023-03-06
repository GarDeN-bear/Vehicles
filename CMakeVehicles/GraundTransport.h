#pragma once
#include "DynamicVehicles.h"

namespace DynamicVehicles {
	class GraundTransport : public DynamicVehicles::Vehicles {
	protected:
		int timeBeforeRest;
		int restPeriod_1;
		int restPeriod_2;
		int restPeriod_3;
	};
}