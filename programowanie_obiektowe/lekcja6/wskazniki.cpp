#include <iostream>

using namespace std;

class Worker {
public:
    string name, surname;
    void getData();
};

void Worker::getData(){
    cout<<"Imi� i nazwisko: "<<name<<" "<<surname;
};

int main(int argc, char** argv){
    setlocale(LC_CTYPE,"polish");
    Worker kowalski;

    Worker *p_kowalski;

    p_kowalski=&kowalski;
    cout<<"Adres obiektu kowalski: "<<p_kowalski;

    kowalski.surname="Kowalski";
    p_kowalski->name="Pawe�";

    kowalski.getData();
    p_kowalski->getData();//wska�nik


    return 0;
}
