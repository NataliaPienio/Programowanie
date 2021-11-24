#include<iostream>
using namespace std;

class Car{
public:
    string brand, model, color, year;
    float price;

    void showData();
    Car ();
    Car(string pBrand, string pModel, string pColor, string pYear, float pPrice);
    Car(string pBrand, string pModel, string pYear);

    ~Car(){
        cout<<"Destruktor"<<endl;
    }

};

void Car::showData(){
    cout<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color<<"\nRok: "<<year
    <<"\nCena: "<<price<<endl;
}

Car::Car(){
    cout<<"Domyœlny"<<endl;
}

Car::Car(string pBrand, string pModel, string pColor, string pYear, float pPrice){
    brand = pBrand;
    model = pModel;
    color = pColor;
    year = pYear;
    price = pPrice;
}

Car::Car(string pBrand, string pModel, string pYear){
    brand = pBrand;
    model = pModel;
    year = pYear;
}

void createObjectCar(){
    Car car;
    cout<<"CreateObject"<<endl;
}

int main(){
    setlocale(LC_CTYPE, "polish");

    Car fiat = Car("fiat" , "Multipla", "szary", "2000", 2000.99);
    fiat.showData();

    Car* wsk;
    wsk=&fiat;
    wsk->price=1900;
    wsk->showData();

    createObjectCar();


return 0;
}
