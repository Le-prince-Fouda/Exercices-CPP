#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c, d; // "d" est le distriminant, "a, b, c" sont les coefficient de l42auqtion
    double x1, x2; // x1 et x2 sont les solution ou racine de l'equation
    string decision;
    do{
        cout<<endl << "Soit le polynome: P(x) = ax^2 + bx +c"<< endl;
        cout<< "Entrer les coefficient (a, b et c) de ce polynome" << endl;
        cin>> a >> b >> c;
        cout<< "Votre polynome est: P(x) = "<< a << "x^2 + " << b << "x + " << c << endl<< endl;
        //On calcul le distriminan
        d = b*b;
        d = d - 4*a*c;
        // En fonction de la valeur du distriminant, on calcule les racine du polynome
        if(d>0){
                //Calcul de x1
            x1= -b + sqrt(d);
            x1= x1/(2*a);
                //calcul de x2
            x2= -b - sqrt(d);
            x2= x2/(2*a);
            cout<< "Les racines du polynome sont: "<< x1 << " et " << x2 <<endl;
        }
        else if(d==0) {
                x1= -b;
                x1= x1/(2*a);
                cout<< "Une seul racine: " << x1 << endl;
        }
        else{
            cout<< "Il n'y a aucune solution"<<endl;
        }
        // On donne la possibilité à l'utilisateur de traiter un nouveau polynome et déterminer ses racines
        // On repète instruction tant que l'utilisateur n'a pas donner l'une des réponses attendues: OUI/NON
        //EN FONCTION DE LA D2CISION LE TRAITEMENT SERA REFAIT OU PAS.
        do{
            cout<<endl << "Desirez vous traiter un nouvequ polynome? OUI/NON "<<endl <<endl;
            cin>> decision;
        }while(decision!="OUI" && decision!="NON");

    }while(decision=="OUI");

cout<<endl <<"Nous vous remercions :)";
 return 0;
}



