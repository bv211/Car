#pragma once
#include "Car.h"
#include <iostream>

using namespace std;

class Lada : public Car {
public:
	Lada(int max_speed, const string& name, const Transmission& transmission) :
		Car(max_speed, name, transmission) {}
};