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
        cout<< "d�ugo��: " << height << "\n" << "szeroko��: " << width << "\n" << "pole: " << rectangle::showArea() << "\n" << "obw�d: " << rectangle::showCircuit();

      };

int main()
{
    setlocale(LC_CTYPE,"polish");
    rectangle prostokat;
    cout << "Podaj d�ugo��" << endl;
    cin >> prostokat.height;
    cout << "podaj szeroko��" << endl;
    cin >> prostokat.width;

    prostokat.showAll();

}
