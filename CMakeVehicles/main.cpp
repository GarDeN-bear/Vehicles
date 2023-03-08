#include <iostream>
#include "Functions.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int racingType; // тип гонки
	int distance; // длина дистанции
	int action; // действие в консоли (используется в функции chooseAction())
	int result; // значение кода возврата для определения использования трансопртного средства, несоответствующего типу гонки
	std::string registeredVehicles; // зарегистрированный транспорт, для вывода на консоль
	DynamicVehicles::Vehicles* vehiclesArray = new DynamicVehicles::Vehicles[7]; // массив транспортных средств (7 - максимальновозможное количество транспортных средств, участвующих в гонке)
	int i = 0; // индекс массива
	int step = 0; // шаг по циклу, используется как переключатель в некоторых функциях
	int numberVehicle; // номер транспортного средства при регистрации транспорта
	int checkRacingType;
	std::cout << "Добро пожаловать в гоночный симулятор!\n";

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
			std::cout << "Необходимо ввести минимум 2 транспортных средства!\n";
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



