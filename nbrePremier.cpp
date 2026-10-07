/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Mattia Lopardo
  Date        : 07.10.26

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    const int n_col = 5;
    char repeat = 'O';
while (repeat == 'O') {
    int nbr = 0;
    cout << "Debut du programme" << endl;
    do {
        cout << "entrer une valeur [2-1000] : " << endl;
        cin >> nbr;

    } while (nbr < 2 || nbr >= 1000);
    cout << "Voici la liste des nombres premiers" << endl;

    for (int a = 2; a <= nbr; ++a) {

        for (int b = 2 ; b <= a; ++b) {

            if (a % b != 0 && b != a) { continue;}
            else if (a % b == 0 && b!= a) { break;}
            else if (b == a) {cout << a << " "; break;}
        }
}cout << endl;
    do {
        cout << "Voulez-vous recommencer [O/N] :" << endl;
        cin >> repeat;

    } while (repeat != 'O' and repeat != 'N');

}
    cout << "Fin du programme" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}