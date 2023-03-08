#include "DynamicVehicles.h"

namespace DynamicVehicles {
	int Vehicles::calculateTime() {
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
	int Vehicles::getVelocity() {
		return velocity;
	}
	int Vehicles::getResultTime() {
		return resultTime;
	}
}