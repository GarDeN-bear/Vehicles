#pragma once
#include <iostream>
#include "GraundVehicles/Camel.h"
#include "GraundVehicles/CamelSpeedWalker.h"
#include "GraundVehicles/Centaur.h"
#include "GraundVehicles/BootsAllTerrains.h"
#include "DynamicVehicles/DynamicVehicles.h"
#include "AirVehicles/Broom.h"
#include "AirVehicles/CarpetPlane.h"
#include "AirVehicles/Eagle.h"


// функция выбоа типа гонки
void chooseTypeRace(int& racingType);

// функция выбора действия (1. зарегистрировать трансорт)
void chooseAction(int& action, int& racingType);

// функция выбора действия (1. зарегистрировать трансорт, 2. начать гонку)
void chooseAction(int step, int& action, int& racingType);

// функция выбора длины дистанции
void chooseDistance(int& distance);

void showRegisteredVehicles(int racingType, int distance, std::string registeredVehicles);

// функция выбора номера транспортного средства для регистрации в гонке
int getNumberVehicle(int racingType, int& numberVehicle);

// функция выбора транспортного средства в зависимости от введеного номера транспортного средства
DynamicVehicles::Vehicles chooseVehicle(int step, int numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehicles, int& i, int distance);

// исключение, бросаемое при вводе значения длины дистанции меньше 0
class DistanceBelowZero : public std::runtime_error {
public:
	DistanceBelowZero(std::string error) : std::runtime_error(error) {}
};

int checkVehiclesArray(DynamicVehicles::Vehicles vehicle, DynamicVehicles::Vehicles* vehiclesArray, int& i, std::string& registeredVehicles, int size = 7);
