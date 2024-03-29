#include "CarpetPlane.h"

namespace DynamicVehicles {
	CarpetPlane::CarpetPlane(float distance_) {
		nameVehicle = "����-������";
		velocity = 10;
		if (distance_ < 1000) {
			distanceReductionFactor = 1;
		}
		else if (distance_ >= 1000 && distance_ < 5000) {
			distanceReductionFactor = 0.97;
		}
		else if (distance_ >= 5000 && distance_ < 10000) {
			distanceReductionFactor = 0.9;
		}
		else {
			distanceReductionFactor = 0.95;
		}
		distance = distanceReductionFactor * distance_;
		resultTime = calculateTime();
	}
}
