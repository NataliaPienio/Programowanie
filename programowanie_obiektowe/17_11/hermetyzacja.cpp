#include <iostream>

using namespace std;

class Rectangle{
	public:
		double sideA {0};
		double sideB {0};

		Rectangle();
		Rectangle(double pSideA, double pSideB);

		void getSides();
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

int main()
{
	setlocale(LC_CTYPE,"polish");
	double a=10;
	double b=20;

	Rectangle p1;
	cout<<"Bok A: "<<p1.sideA<<endl;
	p1.sideA=100;
	cout<<"Bok A: "<<p1.sideA<<endl;

	getSides(a,b);

	Rectangle p2(a,b);
	p2.getSides();

	return 0;
}
