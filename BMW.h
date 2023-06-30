#pragma once
#include "Car.h"
#include <iostream>

using namespace std;

class BMW : public Car {
public:
	BMW(int max_speed, const string& name, const Transmission& transmission) :
		Car(max_speed, name, transmission) {}
};
