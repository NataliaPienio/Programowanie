#include<iostream>
using namespace std;

class c1{
        int a, b, c;
		virtual void f0(){
		  cout<<"Funkcja"<<endl;
		  }
};
class c2{
        int a, b, c;
        void f1(){
             cout<<"Funkcja"<<endl;}
        void f2(){
             cout<<"Funkcja"<<endl;}
        void f3(){
             cout<<"Funkcja"<<endl;}
};
class c3{
        int a, b, c;
        void f4(){
             cout<<"Funkcja"<<endl;}
};

int main(){
    setlocale(LC_CTYPE, "polish");

    c1 *wsk1 = new c1;
    cout<<sizeof(*wsk1);

    c2 *wsk2 = new c2;
    cout<<"\n"<<sizeof(*wsk2);

    c3 *wsk3 = new c3;
    cout<<"\n"<<sizeof(*wsk3);

//sizeof
cout<<"\nTyp int zajmuje: "<<sizeof(int)<<" bajt�w";
cout<<"\nTyp char zajmuje: "<<sizeof(char)<<" bajt�w";
cout<<"\nTyp string zajmuje: "<<sizeof(string)<<" bajt�w";
cout<<"\nTyp float zajmuje: "<<sizeof(float)<<" bajt�w";
cout<<"\nTyp double zajmuje: "<<sizeof(double)<<" bajt�w";
cout<<"\nTyp bool zajmuje: "<<sizeof(bool)<<" bajt�w";


return 0;
}
