#include<iostream>
using namespace std;
class Tablica {
   public:
   int tab[10];
   void Sort();
};

void Tablica::Sort(){
    int a;
    for(int x = 0; x<10; x++){
        a=x;
        for(int y=x+1; y<10; y++){
                if(tab[y]>tab[x]){
            a=y;
        }
    }
    swap(tab[a], tab[x]);
    }
};

 int main(){
  Tablica sortowanie;

  for(int x=0; x<10; x++){
    cout<<"Podaj liczbe: ";
    cin>>sortowanie.tab[x];
  }

  sortowanie.Sort();

  cout<<"Sortowanie: ";
  for(int y=0; y<10; y++){
    cout<<sortowanie.tab[y]<<" ";
  }

 return 0;
 }
