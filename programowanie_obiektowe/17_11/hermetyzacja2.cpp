#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA {0};
		double sideB {0};
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);

		void getSides();
		void setSideA(double pSideA);
};

	Rectangle::Rectangle(){};
	Rectangle::Rectangle(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;

	}

	void Rectangle::getSides(){
		cout<<"Bok a: "<<sideA<<"\nBok b: "<<sideB<<endl;
	}

	void getSides(double a, double b){
		cout<<"Bok a: "<<a<<"\nBok b: "<<b<<endl;
	}

	void Rectangle::setSideA(double pSideA){
		sideA=pSideA;
	}

int main()
{
	setlocale(LC_CTYPE,"polish");
	double a=10;
	double b=20;

	Rectangle p1;
	p1.setSideA(10);
	p1.getSides();
	return 0;
}

