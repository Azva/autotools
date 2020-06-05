#include <iostream>
#include "libpole.h"
#include "libobj.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "polish");
    int wybor=-1;
    float bok;
    while (wybor){
        cout<<"Wybierz akcję:\n"
            "1 - Policz pole powierzchni kwadratu\n"
            "2 - Policz objętość sześcianu\n"
            "0 - Wyjdź z programu"<<endl;
        cin>>wybor;
        switch(wybor){
        case 1:
            cout<<"Podaj bok kwadratu: ";   //gdyby nie to, że trzeba przyjąć bok jaką daną wejściową, załatwiłabym to w funkcji
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawną długość boku."<<endl;
                cout<<"Podaj bok kwadratu: ";
                cin>>bok;
            }
            cout<<"Pole podanego prostokąta to "<<polePow(bok)<<"."<<endl;
            break;
        case 2:
            cout<<"Podaj bok sześcianu: ";
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawną długość boku."<<endl;
                cout<<"Podaj bok sześcianu: ";
                cin>>bok;
            }
            cout<<"Objętość podanego prostopadłościanu to "<<obj(bok)<<"."<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"Podano nieprawidłową liczbę. Spróbuj ponownie."<<endl;
        }
    }
    return 0;
}
