#include "Broom.h"

namespace DynamicVehicles {
	Broom::Broom(int distance_) {
		nameVehicle = "�����";
		velocity = 20;
		distanceReductionFactor = floor(distance_ / 1000);
		distance = distanceReductionFactor * distance_;
		resultTime = calculateTime();
	}
}