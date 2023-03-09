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

// ������� ������ ���� �����
void chooseTypeRace(int& racingType);

// ������� ������ �������� (1. ���������������� ��������)
void chooseAction(int& action);

// ������� ������ �������� (1. ���������������� ��������, 2. ������ �����)
void chooseAction(int step, int& action);

// ������� ������ ����� ���������
void chooseDistance(float& distance);

// ������� ������� ������������������ ������������ �������
void showRegisteredVehicles(int racingType, float distance, std::string registeredVehicles);

// ������� ������ ������ ������������� �������� ��� ����������� � �����
int getNumberVehicle(int racingType, int& numberVehicle);

// ������� ������ ������������� �������� � ����������� �� ��������� ������ ������������� ��������
DynamicVehicles::Vehicles chooseVehicle(int step, int numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehiclesArray, int& i, float distance);

// ������� ����������� ������������� ��������
void registerVehicle(int racingType, int step, int& numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehiclesArray, int& i, float distance);
// ������� �������� ��������� ����������� ���������� 
int checkVehiclesArray(DynamicVehicles::Vehicles vehicle, DynamicVehicles::Vehicles* vehiclesArray, int& i, std::string& registeredVehicles, int size = 7);

// ������� ������� ���������� �����
void resultRacing(int i, int& action, DynamicVehicles::Vehicles* vehiclesArray);

// ������� ���������� ������� ������������ �������
void sortVehiclesArray(int i, DynamicVehicles::Vehicles* vehiclesArray);