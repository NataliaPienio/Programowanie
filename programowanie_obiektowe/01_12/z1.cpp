#include<iostream>
using namespace std;

class Worker{
private:
    string name, surname, pesel;
public:
    short int height;

    void setName(string pName);
    string getName();


    Worker(string, string, string, short int);
};

Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight){
    name=pName;
    surname=pSurname;
    pesel=pPesel;
    height=pHeight;
}

void Worker::setName(string pName){
    name=pName;
}

string Worker::getName(){
    return name;
}


int main(){
    setlocale(LC_CTYPE, "polish");
    Worker nowak("Janusz", "Nowak", "0123456789", 180);

    Worker *wsk = &nowak;
    wsk -> setName("Krycha");

    cout<<"Imi�: "<<wsk->getName() <<endl;



return 0;
}
