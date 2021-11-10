#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;

		void getData();

		Worker(){
		cout<<"Konstruktor domyœlny"<<endl;
		}

		Worker(string pName, string pSurname);

		~Worker(){
		    cout<<"destruktor"<<endl;
		};

};

void Worker::getData(){
    cout<<"Imię i nazwisko: "<<name<<" "<<surname<<endl;}

Worker::Worker(string pName, string pSurname):
    name {pName},
    surname {pSurname}
    {
        cout<<"Konstruktor parametryczny"<<endl;
    }

int main (int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
    Worker nowak;


return 0;
}
