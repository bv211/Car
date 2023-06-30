#pragma once
#include <iostream>

using namespace std;

enum class Transmission { Automat, Manual, VnatureApparat };

class Car {
	int _max_speed;
	string _name;
	Transmission _transmission;

public:
	Car(int _max_speed, const string& _name, const Transmission& _transmission)
		: _max_speed(_max_speed), _name(_name), _transmission(_transmission) {}

	int get_speed() const {
		return _max_speed;
	}

	const string& get_name() const {
		return _name;
	}

	Transmission get_trans() const {
		return _transmission;
	}
};