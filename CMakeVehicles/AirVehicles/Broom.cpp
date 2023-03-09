#include "Broom.h"

namespace DynamicVehicles {
	Broom::Broom(float distance_) {
		nameVehicle = "Метла";
		velocity = 20;
		distanceReductionFactor = 1 - floor(distance_ / 1000) / 100;
		distance = distanceReductionFactor * distance_;
		resultTime = calculateTime();
	}
}