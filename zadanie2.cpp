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
        cout<<"Wybierz akcj�:\n"
            "1 - Policz pole powierzchni kwadratu\n"
            "2 - Policz obj�to�� sze�cianu\n"
            "0 - Wyjd� z programu"<<endl;
        cin>>wybor;
        switch(wybor){
        case 1:
            cout<<"Podaj bok kwadratu: ";   //gdyby nie to, �e trzeba przyj�� bok jak� dan� wej�ciow�, za�atwi�abym to w funkcji
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawn� d�ugo�� boku."<<endl;
                cout<<"Podaj bok kwadratu: ";
                cin>>bok;
            }
            cout<<"Pole podanego prostok�ta to "<<polePow(bok)<<"."<<endl;
            break;
        case 2:
            cout<<"Podaj bok sze�cianu: ";
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawn� d�ugo�� boku."<<endl;
                cout<<"Podaj bok sze�cianu: ";
                cin>>bok;
            }
            cout<<"Obj�to�� podanego prostopad�o�cianu to "<<obj(bok)<<"."<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"Podano nieprawid�ow� liczb�. Spr�buj ponownie."<<endl;
        }
    }
    return 0;
}