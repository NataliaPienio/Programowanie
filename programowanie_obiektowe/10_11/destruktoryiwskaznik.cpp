#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;

		void getData();

		Worker(){
		cout<<"Konstruktor domy�lny"<<endl;
		}

		Worker(string pName, string pSurname);

		~Worker(){
		    cout<<"destruktor"<<endl;
		};

};

void Worker::getData(){
    cout<<"Imi� i nazwisko: "<<name<<" "<<surname<<endl;}

Worker::Worker(string pName, string pSurname):
    name {pName},
    surname {pSurname}
    {
        cout<<"Konstruktor parametryczny"<<endl;
    }

void createNewObject(){
    Worker worker;
    cout<<"Wywo�ano funkcje createNewObjects"<<endl;
    }

int main (int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
    //Worker nowak;

 // Worker *p_nowak = new Worker("Janusz", "Nowak");
//  p_nowak->getData();
 // delete p_nowak;

    createNewObject();
    Worker kowalski;

return 0;
}
