#include "Camel.h"

namespace DynamicVehicles {
	Camel::Camel() {
		velocity = 10;
		timeBeforeRest = 30;
		restPeriod_1 = 5;
		restPeriod_2 = 8;
	}

	int Camel::Calculate(int distance) {
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
