#include "Centaur.h"

namespace DynamicVehicles {
	Centaur::Centaur() {
		velocity = 15;
		timeBeforeRest = 8;
		restPeriod_1 = 2;
	}
	int Centaur::Calculate(int distance) {
		int timeWithoutRest = distance / velocity;
		int timeWithRest = timeWithoutRest / timeBeforeRest;
		if (timeWithRest == 0) {
			return timeWithoutRest;
		}
		else {
			return timeWithoutRest + timeWithRest * restPeriod_1;
		}

	}
}