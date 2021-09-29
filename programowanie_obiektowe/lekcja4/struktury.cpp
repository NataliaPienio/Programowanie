#include <iostream>

using namespace std;

struct Date {
    unsigned short int dd, mm, yyyy;
};

struct Student {
    string name, surname;
    unsigned int id;
    unsigned short int gradeInformatics[5];
    Date dateBirthday;
};

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE,"polish");
    Student kowalski{"Janusz" , "Kowalski" , 10 ,{5, 3, 4, 5} , {29, 9, 2021}};
    cout<< "Imiê i nazwisko: "<<kowalski.name<<" "<<kowalski.surname<<"\nIdentyfikator u¿ytkownika: "
    <<kowalski.id<<"\nData urodzenia: "<<kowalski.dateBirthday.dd<<"-"<<kowalski.dateBirthday.mm<<"-"<<kowalski.dateBirthday.yyyy
    <<endl;

    for (unsigned int i=0; i<5; i++){
        cout<<i+1<<" ocena "<<kowalski.gradeInformatics[i]<<endl;
    }
    return 0;
}
