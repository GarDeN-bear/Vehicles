#include "DynamicVehicles.h"

namespace DynamicVehicles {
	float Vehicles::calculateTime() {
		return distance / velocity;
	}

	std::ostream& operator<<(std::ostream& left, Vehicles& right) {
		left << right.resultTime;
		return left;
	}

	bool Vehicles::operator==(Vehicles & right) {
		if (nameVehicle == right.nameVehicle) {
			return true;
		}
		else {
			return false;
		}	
	}

	std::string Vehicles::getVehicleName() {
		return nameVehicle;
	}
	float Vehicles::getVelocity() {
		return velocity;
	}
	float Vehicles::getResultTime() {
		return resultTime;
	}
}