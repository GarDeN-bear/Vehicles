#pragma once
#include <iostream>
#include "DynamicVehicles/DynamicVehicles.h"
#include "GraundVehicles/Camel.h"
#include "GraundVehicles/CamelSpeedWalker.h"
#include "GraundVehicles/Centaur.h"
#include "GraundVehicles/BootsAllTerrains.h"
#include "AirVehicles/Broom.h"
#include "AirVehicles/CarpetPlane.h"
#include "AirVehicles/Eagle.h"

// Функция выбора типа гонки
void chooseTypeRace(int& racingType);

// Функция выбора действия (1. зарегистрировать трансорт)
void chooseAction(int& action);

// Функция выбора действия (1. зарегистрировать трансорт, 2. начать гонку)
void chooseAction(int step, int& action);

// Функция выбора длины дистанции
void chooseDistance(float& distance);

// Функция ввывода зарегистрированных транспортных средств
void showRegisteredVehicles(int racingType, float distance, std::string registeredVehicles);

// Функция выбора номера транспортного средства для регистрации в гонке
int getNumberVehicle(int racingType, int& numberVehicle);

// Функция выбора транспортного средства в зависимости от введеного номера транспортного средства
DynamicVehicles::Vehicles chooseVehicle(int step, int numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehiclesArray, int& i, float distance);

// Функция регистрации транспортного средства
void registerVehicle(int racingType, int step, int& numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehiclesArray, int& i, float distance);
// Функция проверки повторной регистрации транспорта 
int checkVehiclesArray(DynamicVehicles::Vehicles vehicle, DynamicVehicles::Vehicles* vehiclesArray, int& i, std::string& registeredVehicles, int size = 7);

// Функция расчёта результата гонки
void resultRacing(int i, int& action, DynamicVehicles::Vehicles* vehiclesArray);

// Функция сортировки массива транспортных средств
void sortVehiclesArray(int i, DynamicVehicles::Vehicles* vehiclesArray);