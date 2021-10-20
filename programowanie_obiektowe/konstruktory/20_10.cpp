#include <iostream>
using namespace std;

struct Date {
	int dd, mm, yyyy;
};

class Car {
	public:
		int id;
		unsigned short int power;
		float price;
		string brand, model, color;
		Date dateOfProduction;

		void getData();

		Car() {};

		Car(int id);

		Car(string brand, string model, string color);

		Car(int, unsigned short int, float, string, string, string, Date);
};

Car::Car(string pBrand, string pModel, string pColor) {
	brand = pBrand;
	model = pModel;
	color = pColor;
}

Car::Car(int pId, unsigned short int pPower, float pPrice, string pBrand, string pModel, string pColor, Date pDateOfProduction) {
	id = pId;
	power = pPower;
	price = pPrice;
	brand = pBrand;
	model = pModel;
	color = pColor;
	dateOfProduction = pDateOfProduction;
}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model
		 << "\nData produkcji: " << dateOfProduction.dd << "-" << dateOfProduction.mm << "-" << dateOfProduction.yyyy << "\nMoc:" << power
		 << "\nKolor: " << color << "\nCena: " << price;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car ferrari(1, 450, 1000000, "Ferrari", "F430", "Czerwony", {01, 01, 2000});
	ferrari.getData();

	Car bmw;
	bmw.getData();

	Car fiat("fiat", "fiataaa", "fiatowy");
	fiat.getData();

	Car* wsk;
	wsk = &fiat;
	wsk -> brand = "BMW";
	wsk -> getData();
}
