#pragma once
#ifndef VEHICLESLIBRARYDYNAMIC_EXPORTS
#define VEHICLESLIBRARY_API __declspec(dllexport)
#else 
#define VEHICLESLIBRARY_API __declspec(dllimport)
#endif
namespace DynamicVehicles {
	class Vehicles {
	public:
		VEHICLESLIBRARY_API virtual int Calculate(int distance);
	protected:
		int velocity;
	};


}
