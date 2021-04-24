#include <iostream>
#include "duree.h"

using namespace std;




int main()
{

    Duree duree1(1,5,30);
    Duree duree2(1,5,30);

    if(duree1 == duree2){
        cout << "les 2 durees sont identiques " << endl;
    }else{
        cout << "les durees sont inégales" << endl;
    }
    cout << "========================================" << endl;

    Duree duree3(0,0,6);
    Duree duree4(0,0,6);

    if(duree3 != duree4){
        cout << "durees differentes" << endl;
    }else{
        cout << "duree egal" << endl;
    }
    cout << "========================================" << endl;

    Duree duree5(3,5,7);
    Duree duree6(3,5,1);

    if(duree6<duree5) cout << "plus petit" << endl;
    else cout << "plus grand ou egal" << endl;

    cout << "========================================" << endl;

    Duree duree7(1,5,2);
    Duree duree8(1,1,3);

    Duree result;

    result = duree7 += duree8;

    result.afficher();

    cout << "========================================" << endl;

    Duree duree9(1,6,4);
    Duree duree10(0,0,1);

    Duree resadd;

    resadd = duree9 + duree10;

    resadd.afficher();


    return 0;
}







