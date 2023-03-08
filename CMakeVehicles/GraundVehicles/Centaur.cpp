#include "Centaur.h"

namespace DynamicVehicles {
	Centaur::Centaur(int distance_) {
		nameVehicle = "Кентавр";
		velocity = 15;
		timeBeforeRest = 8;
		restPeriod_1 = 2;
		distance = distance_;
		resultTime = calculateTime();
	}
	int Centaur::calculateTime() {
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