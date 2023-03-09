#include <iostream>
#include "Functions.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		int racingType; // Тип гонки
		float distance; // Длина дистанции
		int action; // Действие в консоли (используется в функции chooseAction())
		std::string registeredVehicles; // зарегистрированный транспорт, для вывода на консоль
		DynamicVehicles::Vehicles* vehiclesArray = new DynamicVehicles::Vehicles[7]; // Массив транспортных средств (7 - максимальновозможное количество транспортных средств, участвующих в гонке)
		int i = 0; // Индекс массива vehiclesArray
		int step = 0; // Шаг по циклу, используется как переключатель в некоторых функциях
		int numberVehicle; // Номер транспортного средства при регистрации транспорта
		std::cout << "Добро пожаловать в гоночный симулятор!\n";
		chooseTypeRace(racingType);
		chooseAction(action);
		chooseDistance(distance);
		do {
			registerVehicle(racingType, step, numberVehicle, registeredVehicles, vehiclesArray, i, distance);
			step += 1;
			if (numberVehicle == 0 && i < 2) {
				std::cout << "Необходимо ввести минимум 2 транспортных средства!\n";
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



