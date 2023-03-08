#include "Functions.h"

void chooseTypeRace(int& racingType) {
	bool flag;
	do {
		std::cout << "1. ����� ��� ��������� ����������\n";
		std::cout << "2. ����� ��� ���������� ����������\n";
		std::cout << "3. ����� ��� ��������� � ���������� ����������\n";
		std::cout << "�������� ��� �����: ";
		std::cin >> racingType;
		flag = racingType != 1 && racingType != 2 && racingType != 3;
		if (flag) {
			std::cout << "���������� ������ �������� �� ������!\n";
		}
	} while (flag);

}

void chooseAction(int& action, int& racingType) {
	bool flag;
	do {
		std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n";
		std::cout << "1. ���������������� ���������\n";
		std::cout << "�������� ��������: ";
		std::cin >> action;
		flag = action != 1;
		if (flag) {
			std::cout << "���������� ������ �������� �� ������!\n";
		}
	} while (flag);
}

void chooseAction(int step, int& action, int& racingType) {
	bool flag;
	do {
		std::cout << "1. ���������������� ���������\n";
		std::cout << "2. ������ �����\n";
		std::cout << "�������� ��������: ";
		std::cin >> action;
		flag = action != 1 && action != 2;
		if (flag) {
			std::cout << "���������� ������ �������� �� ������!\n";
		}
	} while (flag);
}

void chooseDistance(int& distance) {
	bool flag;
	do {
		std::cout << "������� ����� ��������� (������ ���� ������������): ";
		std::cin >> distance;
		flag = distance < 0;
		if (flag) {
			std::cout << "����� ��������� ������ ���� ������������!\n";
		}
	} while (flag);
}

void showRegisteredVehicles(int racingType, int distance, std::string registeredVehicles) {
	if (racingType == 1) {
		std::cout << "����� ��� ��������� ����������. ����������: " << distance << "\n";
		if (registeredVehicles.length() != 0) {
			std::cout << "������������������ ������������ ��������: " + registeredVehicles + "\n";
		}
	}
}

int getNumberVehicle(int racingType, int& numberVehicle) {
	bool flag;
	do {
		std::cout << "1. �������-���������\n";
		std::cout << "2. �����\n";
		std::cout << "3. �������\n";
		std::cout << "4. �������\n";
		std::cout << "5. ���\n";
		std::cout << "6. �������-���������\n";
		std::cout << "7. ����-������\n";
		std::cout << "0. ��������� �����������\n";
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> numberVehicle;
		flag = numberVehicle != 0 && numberVehicle != 1 && numberVehicle != 2 && numberVehicle != 3 && numberVehicle != 4 && numberVehicle != 5 && numberVehicle != 6 && numberVehicle != 7;
		if (flag) {
			std::cout << "���������� ������ �������� �� ������!\n";
		}
		if (racingType == 1 && (numberVehicle == 2 || numberVehicle == 5 || numberVehicle == 7)) {
			std::cout << "������� ���������������� ������������ ��� ������������� ��������!\n";
			return 1;
		}
		else if (racingType == 2 && (numberVehicle == 1 || numberVehicle == 3 || numberVehicle == 4 || numberVehicle == 6)) {
			std::cout << "������� ���������������� ������������ ��� ������������� ��������!\n";
			return 2;
		}
	} while (flag);
	return 0;
}

DynamicVehicles::Vehicles chooseVehicle(int step, int numberVehicle, std::string& registeredVehicles, DynamicVehicles::Vehicles* vehiclesArray, int& i, int distance) {
	DynamicVehicles::Vehicles* ptr_vehicle;
	if (numberVehicle == 1) {
		DynamicVehicles::BootsAllTerrains bootsAllTerrains(distance);
		ptr_vehicle = &bootsAllTerrains;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "�������-��������� ������� ����������������!\n";
			registeredVehicles += "�������-���������";
		}
	}
	if (numberVehicle == 2) {
		DynamicVehicles::Broom broom(distance);
		ptr_vehicle = &broom;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "����� ������� ����������������!\n";
			registeredVehicles += "�����";
		}
	}
	if (numberVehicle == 3) {
		DynamicVehicles::Camel camel(distance);
		ptr_vehicle = &camel;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "������� ������� ���������������!\n";
			registeredVehicles += "�������";
		}

	}
	if (numberVehicle == 4) {
		DynamicVehicles::Centaur centaur(distance);
		ptr_vehicle = &centaur;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "������� ������� ���������������!\n";
			registeredVehicles += "�������";
		}


	}
	if (numberVehicle == 5) {
		DynamicVehicles::Eagle eagle(distance);
		ptr_vehicle = &eagle;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "��� ������� ���������������!\n";
			registeredVehicles += "���";
		}

	}
	if (numberVehicle == 6) {
		DynamicVehicles::CamelSpeedWalker camelSpeedWalker(distance);
		ptr_vehicle = &camelSpeedWalker;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "�������-��������� ������� ���������������!\n";
			registeredVehicles += "�������-���������";
		}

	}
	if (numberVehicle == 7) {
		DynamicVehicles::CarpetPlane carpetPlane(distance);
		ptr_vehicle = &carpetPlane;
		if (checkVehiclesArray(*ptr_vehicle, vehiclesArray, i, registeredVehicles) == 0) {
			std::cout << "����-������ ������� ���������������!\n";
			registeredVehicles += "����-������";
		}
	}
	return *ptr_vehicle;
}

int checkVehiclesArray(DynamicVehicles::Vehicles vehicle, DynamicVehicles::Vehicles* vehiclesArray, int& i, std::string& registeredVehicles, int size) {
	int check = 0;
	for (int i = 0; i < size; i++) {
		if (vehicle == vehiclesArray[i]) {
			check = 1;
		}
	}
	if (check == 1) {
		std::cout << vehicle.getVehicleName() + " ��� ���������������!\n";
	}
	else {
		vehiclesArray[i] = vehicle;
		if (i != 0) {
			registeredVehicles += ", ";
		}
		i++;
	}
	return check;
}