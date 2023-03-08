#include "CamelSpeedWalker.h"

namespace DynamicVehicles {
	CamelSpeedWalker::CamelSpeedWalker(int distance_) {
		nameVehicle = "Верблюд-быстроход";
		velocity = 40;
		timeBeforeRest = 10;
		restPeriod_1 = 5;
		restPeriod_2 = 6.5;
		restPeriod_3 = 8;
		distance = distance_;
		resultTime = calculateTime();
	}

	int CamelSpeedWalker::calculateTime() {
		int timeWithoutRest = distance / velocity;
		int timeWithRest = timeWithoutRest / timeBeforeRest;
		if (timeWithRest == 0) {
			return timeWithoutRest;
		}
		else if (timeWithRest == 1) {
			return timeWithoutRest + restPeriod_1;
		}
		else if (timeWithRest == 2) {
			return timeWithoutRest + restPeriod_1 + restPeriod_2;
		}
		else {
			return timeWithoutRest + restPeriod_1 + (timeWithRest - 2) * restPeriod_3;
		}
	}
}