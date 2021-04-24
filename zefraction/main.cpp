#include <iostream>
#include "zfraction.h"

using namespace std;

int main()
{

    // test de ==

    Zfraction f1(2,2);
    Zfraction f2(2,3);

    if(f1==f2) cout << "egal" << endl;
    else cout << "pas egal" << endl;

    cout << "=====================================" << endl;

    // test de methode calcul

    Zfraction fcalc(4,2);
    double res;
    res = fcalc.calcul();
    cout << "resultat fraction : " << res << endl;

    cout << "=====================================" << endl;

    // test de <<

    cout << fcalc << endl;

    cout << "=====================================" << endl;

    // test de +

    Zfraction z1(4,2);
    Zfraction z2(4,4);

    cout << z1 << " + " << z2;

    z1 += z2;

    cout << " = " << z1 << endl;

    cout << "=====================================" << endl;

    // test de <

    Zfraction z3(4,2);
    Zfraction z4(4,4);

    if(z3 < z4)cout << z3 << "plus petit que : " << z4 << endl;
    else cout << z3.calcul() << " plus grand ou egal à " << z4.calcul() << endl;

    cout << "=====================================" << endl;





    return 0;
}
