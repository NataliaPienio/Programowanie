#include"Animal.h"
class Dog: public Animal{
public:
    void className(){
        cout<<"Dog"<<endl;
    }
     void speak() override{
        cout<<"Hau Hau"<<endl;
    }
};
