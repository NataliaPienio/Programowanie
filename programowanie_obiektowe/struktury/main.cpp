#include <iostream>
using namespace std;

class School{
   public:
       static string s_school;
       static string s_jobPosition;

       string name;
       string surname;

       void getData();
       void setNameSurname(string name, string surname);

       static string s_getSchool();
       static void s_setSchool(string pSchool);
};

string School::s_school="ZSK";
string School::s_jobPosition="Uczeñ";

void School::getData(){
    cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
};

void School::setNameSurname(string name, string pSurname){
    School::name=name;
    surname=pSurname;
};

string s_getSchool(){
    return School::s_school;
};

int main(int argc, char** argv){
    setlocale(LC_CTYPE,"polish");
    cout<<School::s_school<<endl; //przy u¿yciu klasy mo¿emy statyczne wywo³ywaæ
    cout<<School::s_jobPosition<<endl;

    School kowal;
    kowal.setNameSurname("Krystyna", "Kowal");
    kowal.getData();

    School::s_jobPosition="nauczyciel";
    cout<<"Stanowisko: "<<School::s_jobPosition<<endl;
    cout<<kowal.s_jobPosition<<endl;

    School::s_jobPosition="dyrektor";
    cout<<"Stanowisko: "<<School::s_jobPosition<<endl;\

    kowal.s_getSchool();
    kowal.s_setSchool("ZS£");
    cout<<kowal.s_getSchool();

    return 0;
}
    //do statycznych nie dodajemy wartoœæ w klasie
    //statycznych
