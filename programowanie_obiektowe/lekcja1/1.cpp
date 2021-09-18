#include <iostream>

using namespace std;

class Worker {
    public:
    // deklaracja zmiennych czlonkowskich (wlasciwoœci)
    string name="Janusz";
    string surname;
    unsigned short int age;
    // deklaracja funkcji czlonkowskich (metoda)
    void showData(){
        cout<<" Imie ";
    }
    void showName(){
    // wyświetlic imie pobrane z obiektu

    }
};

int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    cout << pracownik.name;
    pracownik.showData();

    pracownik.surname = "Nowak";
    cout << "Imie i nazwisko: " << pracownik.name << " " << pracownik.surname <<endl;
    pracownik.age=22;
    cout << "Wiek: " << pracownik.age;
    return 0;
}
