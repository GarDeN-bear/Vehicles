#include "Eagle.h"

namespace DynamicVehicles {
	Eagle::Eagle(float distance_) {
		nameVehicle = "���";
		velocity = 8;
		distanceReductionFactor = 0.94;
		distance = distanceReductionFactor * distance_;
		resultTime = calculateTime();
	}
}