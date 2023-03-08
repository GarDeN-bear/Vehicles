#include "Eagle.h"

namespace DynamicVehicles {
	Eagle::Eagle(int distance_) {
		nameVehicle = "Îð¸ë";
		velocity = 8;
		distanceReductionFactor = 0.94;
		distance = distanceReductionFactor * distance_;
		resultTime = calculateTime();
	}
}