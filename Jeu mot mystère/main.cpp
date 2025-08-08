#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    string liste_de_mot[3];
    string mot;
    liste_de_mot[0]="Maladie";
    liste_de_mot[1]="recuperation";
    liste_de_mot[2]="divorce";
    srand(time(0));
    int a= 3;
     cout << "methode 1" << endl;
    while(a!=0){
           int num;
            num=rand() % 3;
            mot=liste_de_mot[num];
            cout << mot << endl;
            liste_de_mot.erase(liste_de_mot.begin() + --num);  /* Supprime une case en milieu de tableau (la cellule est
                                                               supprimer peu importe où elle se trouve dans le tableau)*/
            a--;
    }

     cout << "methode 2" << endl;
    for (int i=0; i<=2; i++)
        {
            int num;
            num=rand() % 3;
            mot=liste_de_mot[num];
            cout << mot << endl;
        }
    return 0;
}
