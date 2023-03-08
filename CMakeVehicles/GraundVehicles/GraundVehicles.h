#pragma once
#include "../DynamicVehicles/DynamicVehicles.h"

namespace DynamicVehicles {
	class GraundVehicles : public Vehicles {
	protected:
		int timeBeforeRest;
		int restPeriod_1;
		int restPeriod_2;
		int restPeriod_3;
	};
}