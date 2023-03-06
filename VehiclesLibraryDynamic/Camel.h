#pragma once
#include "GraundTransport.h"
#include <iostream>

namespace DynamicVehicles {
	class Camel : public DynamicVehicles::GraundTransport {
	public:
		VEHICLESLIBRARY_API void getVelocity() {
			std::cout << velocity << "\n";
		}
		VEHICLESLIBRARY_API void getTimeBeforeRest() {
			std::cout << timeBeforeRest << "\n";
		}
		VEHICLESLIBRARY_API void getRestPeriod_1() {
			std::cout << restPeriod_1 << "\n";
		}
		VEHICLESLIBRARY_API void getRestPeriod_2() {
			std::cout << restPeriod_2 << "\n";
		}
	private:
		int velocity = setVelocity(10);
		int timeBeforeRest = setTimeBeforeRest(30);
		int restPeriod_1 = setRestPeriod(5);
		int restPeriod_2 = setRestPeriod(8);
	};
}