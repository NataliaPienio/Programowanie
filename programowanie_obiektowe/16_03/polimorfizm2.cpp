#include<iostream>
using namespace std;

class Animal{
    public:
    float weight, age;
    void look(){
      cout<<"zwierze patrzy"<<endl;
      }
      virtual void breathe(){
          cout<<"zwierze oddycha"<<endl;
      }
};
class Fish : public Animal{
    public:
    virtual void breathe(){
          cout<<"oddycha skrzelami"<<endl;
      }
      void swim(){
          cout<<"P³yñ"<<endl;
      }
};
class Mammal : public Animal{
    public:
    virtual void breathe(){
          cout<<"oddycha p³ucami"<<endl;
      }
      void run(){
          cout<<"Biegnij"<<endl;
      }
};
class Bird : public Animal{
    public:
    virtual void breathe(){
          cout<<"oddycha p³ucami"<<endl;
      }
      void fly(){
          cout<<"Leæ"<<endl;
      }
};

int main(){
    setlocale(LC_CTYPE, "polish");

    Fish karp;
    Fish *wsk = &karp;
    wsk->breathe();

    Bird gawron;
    wsk = &gawron;


return 0;
}
