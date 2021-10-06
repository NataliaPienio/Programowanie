include <iostream>

using namespace std;

int main(int argc, char** argv){
    setlocale(LC_CTYPE,"polish");
    int x, y;
    x=10;
    y=x;

    int*p_test;
    p_test=&x;

    cout<<p_test<<endl;

    p_test=&y;
    cout<<p_test<<endl;

    //czy da się przypisaæ adres do drugiej zmiennej? zad dom


    return 0;
}
