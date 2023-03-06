#pragma once
#include "GraundTransport.h"

namespace DynamicVehicles {
	class CamelSpeedWalker : public GraundTransport {
	public:
		CamelSpeedWalker();
		VEHICLESLIBRARY_API int Calculate(int distance) override;
	};
}