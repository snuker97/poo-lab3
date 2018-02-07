#include "UnitatiDeLungime.h"

int main() {

    UnitatiDeLungime obiect1(5, 5, 5);
    UnitatiDeLungime obiect2(5, 5, 5);
    UnitatiDeLungime obiect3;

    cout << obiect1.getUnitatiDeLungime() << endl;
    cout << obiect2.getUnitatiDeLungime() << endl;

    // Supraincarcarea operatorului '+'
    obiect3 = obiect1 + obiect2;
    cout << "\n" << "1. Supraincarcarea operatorului \" + \" :" << endl;
    cout << obiect3.getUnitatiDeLungime() << endl;

    // Supraincarcarea operatorului '-'
    obiect3 = obiect1 - obiect2;
    cout << "\n" << "2. Supraincarcarea operatorului \" - \" :" << endl;
    cout << obiect3.getUnitatiDeLungime() << endl;


    // Supraincarcarea operatorului '*'
    obiect3 = obiect1 * obiect2;
    cout << "\n" << "3. Supraincarcarea operatorului \" * \" :" << endl;
    cout << obiect3.getUnitatiDeLungime() << endl;

    // Supraincarcarea operatorului '/'
    obiect3 = obiect1 / obiect2;
    cout << "\n" << "4. Supraincarcarea operatorului \" / \" :" << endl;
    cout << obiect3.getUnitatiDeLungime() << endl;

    return 0;
}