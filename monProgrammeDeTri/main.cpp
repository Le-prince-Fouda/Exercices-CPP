#include <iostream>

using namespace std;
    //Que fait notre programme?
    /* Il demande � l'utilisateur d'entrer une liste d'entier puis
     * il trie ses entier par ordre croissant et renvoie le r�sultat*/
int main()
{
    cout << "Hello world!" << endl;
    int listeValeur[10]; //Contient lq liste des entiers � trier

    //On demande � l'utilisateur de saisir les nombres � trier
    cout<<"Entrez la liste des dix entiers a trier"<<endl;
    for(int i=0; i<10; i++){
        cin>> listeValeur[i]; // on lit � chaque fois le nombre et on l'ins�re dans le tableau
    }

    // On pr�sentre la liste des entiers renseign� pr�c�demment.
    cout<<endl << "Les nombres entres sont: "<<endl;
    for(int i=0; i<10; i++){
        cout<< listeValeur[i] << "; ";
    }

    // On effectue le trie
    /* Ici le principe est que: on parcours le tableau du d�but jusqu'� la fin en comparant chaque
     * �l�ment du tableau � ceux qui le suivent. s'il est plus grand qu'un de ses suivants, leurs
     * position seront invers�es en utilisant la variable "tmp" comme interm�diaire*/
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

    // On affiche le �l�ment du tableau d�j� tri� et dans l'ordre du tri
    cout<<endl <<endl<< "Le tri dans l'ordre croissant nous donne:  "<<endl;
    for(int i=0; i<10; i++){
        cout<< listeValeur[i] << "; ";
    }
    return 0;
}
