#include <iostream>
using namespace std;

struct Date {
	int dd, mm, yyyy;
};

class Car {
	public:
		int id=10;
		string brand ="fiat", model="123";

		void getData();


		Car(int pId=13,string pBrand="FIAT", string pModel="XXX");
};

Car::Car(int pId,string pBrand, string pModel) {
	id=pId;
	brand = pBrand;
	model = pModel;}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model
		 <<"\n";
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car ferrari(8, "Ferrari", "F430");
	ferrari.getData();

	Car opel = Car(9, "Opel", "tigra");
	opel.getData();

	Car bmw;
	bmw.getData();

	return 0;}
