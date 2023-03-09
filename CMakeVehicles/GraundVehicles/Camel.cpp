#include "Camel.h"

namespace DynamicVehicles {
	Camel::Camel(float distance_) {
		nameVehicle = "Верблюд";
		velocity = 10;
		timeBeforeRest = 30;
		restPeriod_1 = 5;
		restPeriod_2 = 8;
		distance = distance_;
		resultTime = calculateTime();
	}

	float Camel::calculateTime() {
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
