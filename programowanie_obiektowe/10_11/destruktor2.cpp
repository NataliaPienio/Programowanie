#include <iostream>
using namespace std;

class Animal{
	public:
	    static s_count;

	    Animal(){
	    }

	    ~Animal(){
	        cout<<"destruktor"<<endl;
	    }

};

int main (int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");



return 0;
}

