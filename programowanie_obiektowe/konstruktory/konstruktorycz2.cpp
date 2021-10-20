#include <iostream>
using namespace std;

struct Date {
	int dd, mm, yyyy;
};

class Car {
	public:
		int id=10;
		unsigned short int power;
		float price;
		string brand ="fiat", model="123", color;
		Date dateOfProduction;

		void getData();

        Car(){
        };

		Car(int id,string brand, string model);
};

Car::Car(int pId,string pBrand, string pModel) {
	id=pId;
	brand = pBrand;
	model = pModel;}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model
		 << "\nData produkcji: " << dateOfProduction.dd << "-" << dateOfProduction.mm << "-" << dateOfProduction.yyyy << "\nMoc:" << power
		 << "\nKolor: " << color << "\nCena: " << price<<"\n";
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
