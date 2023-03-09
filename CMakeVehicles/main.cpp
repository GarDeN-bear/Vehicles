#include <iostream>
#include "Functions.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		int racingType; // ��� �����
		float distance; // ����� ���������
		int action; // �������� � ������� (������������ � ������� chooseAction())
		std::string registeredVehicles; // ������������������ ���������, ��� ������ �� �������
		DynamicVehicles::Vehicles* vehiclesArray = new DynamicVehicles::Vehicles[7]; // ������ ������������ ������� (7 - �������������������� ���������� ������������ �������, ����������� � �����)
		int i = 0; // ������ ������� vehiclesArray
		int step = 0; // ��� �� �����, ������������ ��� ������������� � ��������� ��������
		int numberVehicle; // ����� ������������� �������� ��� ����������� ����������
		std::cout << "����� ���������� � �������� ���������!\n";
		chooseTypeRace(racingType);
		chooseAction(action);
		chooseDistance(distance);
		do {
			registerVehicle(racingType, step, numberVehicle, registeredVehicles, vehiclesArray, i, distance);
			step += 1;
			if (numberVehicle == 0 && i < 2) {
				std::cout << "���������� ������ ������� 2 ������������ ��������!\n";
				registerVehicle(racingType, step, numberVehicle, registeredVehicles, vehiclesArray, i, distance);
			}
			else if (numberVehicle == 0 && i >= 2) {
				chooseAction(step, action);
				if (action != 2) {
					numberVehicle = 1;
				}
				else {
					resultRacing(i, action, vehiclesArray);
					break;
				}
			}
		} while (true);
		delete[] vehiclesArray;
		vehiclesArray = nullptr;
		if (action == 2) {
			break;
		}
	} while (true);
}



