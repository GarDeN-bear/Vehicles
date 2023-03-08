#include <iostream>
#include "Functions.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int racingType; // ��� �����
	int distance; // ����� ���������
	int action; // �������� � ������� (������������ � ������� chooseAction())
	int result; // �������� ���� �������� ��� ����������� ������������� ������������� ��������, ������������������ ���� �����
	std::string registeredVehicles; // ������������������ ���������, ��� ������ �� �������
	DynamicVehicles::Vehicles* vehiclesArray = new DynamicVehicles::Vehicles[7]; // ������ ������������ ������� (7 - �������������������� ���������� ������������ �������, ����������� � �����)
	int i = 0; // ������ �������
	int step = 0; // ��� �� �����, ������������ ��� ������������� � ��������� ��������
	int numberVehicle; // ����� ������������� �������� ��� ����������� ����������
	int checkRacingType;
	std::cout << "����� ���������� � �������� ���������!\n";

	chooseTypeRace(racingType);
	chooseAction(action, racingType);
	chooseDistance(distance);

	do {
		showRegisteredVehicles(racingType, distance, registeredVehicles);

		checkRacingType = getNumberVehicle(racingType, numberVehicle);
		if (checkRacingType == 0) {
			if (numberVehicle != 0) {
				chooseVehicle(step, numberVehicle, registeredVehicles, vehiclesArray, i, distance);
			}
		}
		step += 1;
		if (numberVehicle == 0 && i >= 2) {
			chooseAction(step, action, racingType);
			if (action != 2) {
				numberVehicle = 1;
			}
			else {
				int lengthVehiclesArray = i;
				int* calculateArray = new int[lengthVehiclesArray];
				for (int i = 0; i < lengthVehiclesArray; i++) {
					//calculateArray[i] = 
					std::cout << vehiclesArray[i].getResultTime() << "\n";
					//std::cout << calculateArray[i] << "\n";
				}
			}
		}
		else if (numberVehicle == 0 && i < 2) {
			std::cout << "���������� ������ ������� 2 ������������ ��������!\n";
			showRegisteredVehicles(racingType, distance, registeredVehicles);
			getNumberVehicle(racingType, numberVehicle);
			if (numberVehicle != 0) {
				chooseVehicle(step, numberVehicle, registeredVehicles, vehiclesArray, i, distance);
			}
		}
	} while (numberVehicle != 0);

	
	delete[] vehiclesArray;
	vehiclesArray = nullptr;
}



