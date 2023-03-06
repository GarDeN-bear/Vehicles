#include "BootsAllTerrains.h"
namespace DynamicVehicles {
	BootsAllTerrains::BootsAllTerrains() {
		velocity = 6;
		timeBeforeRest = 60;
		restPeriod_1 = 10;
		restPeriod_2 = 5;
	}
	int BootsAllTerrains::Calculate(int distance) {
		int timeWithoutRest = distance / velocity;
		int timeWithRest = timeWithoutRest / timeBeforeRest;
		if (timeWithRest == 0) {
			return timeWithoutRest;
		}
		else if (timeWithRest == 1) {
			return timeWithoutRest + restPeriod_1;
		}
		else {
			return timeWithoutRest + restPeriod_1 + (timeWithRest - 1) * restPeriod_2;
		}
	}
}