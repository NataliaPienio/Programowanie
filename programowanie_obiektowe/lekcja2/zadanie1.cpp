#include <iostream>

using namespace std;

class rectangle{
    public:
    float height;
    float width;
    float showArea();
    float showCircuit();
    void showAll();

    };

    float rectangle::showArea(){
      return height*width;
      };
    float rectangle::showCircuit(){
      return 2*height + 2*width;
      };

      void rectangle::showAll(){
        cout<< "d³ugoœæ: " << height << "\n" << "szerokoœæ: " << width << "\n" << "pole: " << rectangle::showArea() << "\n" << "obwód: " << rectangle::showCircuit();

      };

int main()
{
    setlocale(LC_CTYPE,"polish");
    rectangle prostokat;
    cout << "Podaj d³ugoœæ" << endl;
    cin >> prostokat.height;
    cout << "podaj szerokoœæ" << endl;
    cin >> prostokat.width;

    prostokat.showAll();

}
