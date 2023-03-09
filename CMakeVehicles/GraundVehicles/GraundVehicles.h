#pragma once
#include "../DynamicVehicles/DynamicVehicles.h"

namespace DynamicVehicles {
	// Абстрактный родительский класс наземных транспортных средств
	class GraundVehicles : public Vehicles {
	protected:
		float timeBeforeRest; // Время до отдыха
		float restPeriod_1; // Время отдыха 1
		float restPeriod_2; // Время отдыха 2
		float restPeriod_3; // Время отдыха 3
	};
}