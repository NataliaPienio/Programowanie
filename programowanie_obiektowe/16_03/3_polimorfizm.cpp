#include <iostream>

using namespace std;
class Character{
	public:
		virtual void go()=0;
};
class Human: public Character{
	public:
		void go(){
			cout<<"Cz³owiek idzie\n";
		};
};
class Bear : public Character{
	public:
		void go(){
			cout<<"NiedŸwiedŸ idzie\n";
		}
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Human czlowiek;
	czlowiek.go();//cz³owiek idzie
	
	Character *wsk = &czlowiek;
	wsk->go();//czlowiek idzie
	
	Bear niedzwiedz;
	wsk = &niedzwiedz;
	wsk->go();
	return 0;
}
