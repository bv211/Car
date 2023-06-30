#include <iostream>
#include "BMW.h"
#include "Lada.h"

using namespace std;

string get_trans_name(Transmission trans) {
	switch (trans)
	{
	case Transmission::Automat: return "automat";
	case Transmission::Manual: return "manual";
	case Transmission::VnatureApparat: return "vnature apparat";
	default: "puk";
	}
}

void print_info(const Car& car) {
	string trans = get_trans_name(car.get_trans());

	cout << "name: " << car.get_name() << endl
		<< "max speed: " << car.get_speed() << endl
		<< "transmission: " << trans << endl << endl;
}

int main() {
	Lada lada(220, "kalina", Transmission::Manual);
	BMW bmw_6(9999, "bmw 6", Transmission::VnatureApparat);

	print_info(lada);
	print_info(bmw_6);

	return 0;
}