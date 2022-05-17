#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void lotery(){
    int t[6];
    int Tab[6];
    int score=0;
    cout<<"TOTOLOTEK"<<endl;
        srand(time(NULL));
        for(int x=0; x<6;x++){
            cout<<"Podaj "<<x+1<<" liczbê do totolotka: ";
            cin>>Tab[x];
            }

        for(int y=0; y<6;y++){
            t[y] = 1+rand()%(49);
            cout<<t[y]<<endl;
        }
        for(int b=0; b<6; b++){
        for(int z=0; z<6; z++){
            if(Tab[b]==t[z]){
                score+=1;
            }
        }}
        cout<<"Trafi³eœ "<<score<<" liczb";
}
int main(){
    setlocale(LC_CTYPE, "polish");
    bool menu = true;
   int change;
   string color;
   while(menu){
    cout<<"\nMENU\n0-Wyjscie\n1-Totolotek\n2-Ulubiony kolor"<<endl;
    cin>>change;
    switch(change){
    case 0:
        menu = false;
        break;
    case 1:
        lotery();
        break;
    case 2:
        cout<<"\nPodaj swój ulubiony kolor: ";
        cin>>color;
        cout<<"\nTwój ulubiony kolor to "<<color<<endl;
        break;
    default:
        menu = false;
        break;
    }
   }

 return 0;
 }
