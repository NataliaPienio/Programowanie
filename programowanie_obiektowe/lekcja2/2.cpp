#include <iostream>

using namespace std;

class Worker {
    public:
    string name;
    string surname;
    string nationality;
    unsigned short int yearBirthday;
    char gender;

    void showName(){
        cout << "Imie: " <<name;
    };
    // deklaracja (prototyp) metody
    void showSurname();
    string showPersonality();
    void showAllData();
};
    void Worker::showSurname(){
        cout << "Nazwisko: "<< surname << endl;
    };
    string Worker::showPersonality(){
        return "Imie i nazwisko: " + name + " " + surname + "\n";
    };
    void Worker::showAllData()){
        cout << "Dane pracownika:\n " << Worker::showPersonality() << "Narodowosc" << nationality << "\n rok urodzenia: " << yearBirthday << "r., " << gender;
    };
    switch(gender){
    case 'm':
            cout << "mezczyzna\n"
            break;
        case 'w':
            cout << "kobieta\n"
            break;
        default:
        cout << "-\n"
    }
int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker pracownik;
    pracownik.name = "Janusz";
    pracownik.surname = "Kowalski";
    pracownik.nationality = "Polak";
    pracownik.yearBirthday = "2005";
    pracownik.gender = 'm';

    pracownik.showAllData();

    return 0;
}
