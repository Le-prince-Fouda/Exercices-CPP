#include <iostream>

using namespace std;
    //Que fait notre programme?
    /* Il demande à l'utilisateur d'entrer une liste d'entier puis
     * il trie ses entier par ordre croissant et renvoie le résultat*/
int main()
{
    cout << "Hello world!" << endl;
    int listeValeur[10]; //Contient lq liste des entiers à trier

    //On demande à l'utilisateur de saisir les nombres à trier
    cout<<"Entrez la liste des dix entiers a trier"<<endl;
    for(int i=0; i<10; i++){
        cin>> listeValeur[i]; // on lit à chaque fois le nombre et on l'insère dans le tableau
    }

    // On présentre la liste des entiers renseigné précédemment.
    cout<<endl << "Les nombres entres sont: "<<endl;
    for(int i=0; i<10; i++){
        cout<< listeValeur[i] << "; ";
    }

    // On effectue le trie
    /* Ici le principe est que: on parcours le tableau du début jusqu'à la fin en comparant chaque
     * élément du tableau à ceux qui le suivent. s'il est plus grand qu'un de ses suivants, leurs
     * position seront inversées en utilisant la variable "tmp" comme intermédiaire*/
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(listeValeur[i] > listeValeur[j]){
                int tmp;
                tmp=listeValeur[i];
                listeValeur[i]=listeValeur[j];
                listeValeur[j]=tmp;
            }
        }
    }

    // On affiche le élément du tableau déjà trié et dans l'ordre du tri
    cout<<endl <<endl<< "Le tri dans l'ordre croissant nous donne:  "<<endl;
    for(int i=0; i<10; i++){
        cout<< listeValeur[i] << "; ";
    }
    return 0;
}
