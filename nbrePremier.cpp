/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Mattia Lopardo
  Date        :

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

using namespace std;

int main() {
    const int n_col = 5;
    int nbr = 0;

    do {
        cout << "entrer une valeur [2-1000] : " << endl;
        cin >> nbr;

    } while (nbr < 2 || nbr >= 1000);
    cout << "vous avez choisi ce nombre : " << nbr << endl;
int a = 53;
int aracine = static_cast<int>(sqrt(a));

    for (int b = 2; b <= aracine; ++b) {
        if (a % b != 0 && b != aracine) {cout << b << endl; continue;}
        else if (a % b == 0 && b!= aracine) {cout << "pas premier" << endl; break;}
        else if (b == aracine) {cout << a << endl;}}

}