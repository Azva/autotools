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
        cout<<"Wybierz akcjê:\n"
            "1 - Policz pole powierzchni kwadratu\n"
            "2 - Policz objêtoœæ szeœcianu\n"
            "0 - WyjdŸ z programu"<<endl;
        cin>>wybor;
        switch(wybor){
        case 1:
            cout<<"Podaj bok kwadratu: ";   //gdyby nie to, ¿e trzeba przyj¹æ bok jak¹ dan¹ wejœciow¹, za³atwi³abym to w funkcji
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawn¹ d³ugoœæ boku."<<endl;
                cout<<"Podaj bok kwadratu: ";
                cin>>bok;
            }
            cout<<"Pole podanego prostok¹ta to "<<polePow(bok)<<"."<<endl;
            break;
        case 2:
            cout<<"Podaj bok szeœcianu: ";
            cin>>bok;
            while (bok<=0){
                cout<<"Podaj poprawn¹ d³ugoœæ boku."<<endl;
                cout<<"Podaj bok szeœcianu: ";
                cin>>bok;
            }
            cout<<"Objêtoœæ podanego prostopad³oœcianu to "<<obj(bok)<<"."<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"Podano nieprawid³ow¹ liczbê. Spróbuj ponownie."<<endl;
        }
    }
    return 0;
}