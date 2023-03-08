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


// ������� ����� ���� �����
void chooseTypeRace(int& racingType);

// ������� ������ �������� (1. ���������������� ��������)
void chooseAction(int& action, int& racingType);

// ������� ������ �������� (1. ���������������� ��������, 2. ������ �����)
void chooseAction(int step, int& action, int& racingType);

// ������� ������ ����� ���������
void chooseDistance(int& distance);

void showRegisteredVehicles(int racingType, int distance, std::string registeredVehicles);

// ������� ������ ������ ������������� �������� ��� ����������� � �����
int getNumberVehicle(int racingType, int& numberVehicle);

// ������� ������ ������������� �������� � ����������� �� ��������� ������ ������������� ��������
DynamicVehicles::Vehicles chooseVehicle(int step, int numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehicles, int& i, int distance);

// ����������, ��������� ��� ����� �������� ����� ��������� ������ 0
class DistanceBelowZero : public std::runtime_error {
public:
	DistanceBelowZero(std::string error) : std::runtime_error(error) {}
};

int checkVehiclesArray(DynamicVehicles::Vehicles vehicle, DynamicVehicles::Vehicles* vehiclesArray, int& i, std::string& registeredVehicles, int size = 7);
