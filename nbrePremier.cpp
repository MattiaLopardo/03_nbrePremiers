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
#include <windows.h>

using namespace std;

int main() {

    // Permet d'afficher des lettres accentuées
    SetConsoleOutputCP(CP_UTF8);
    const int n_col = 5;
    char repeat = 'O';
    cout << "Début du programme" << endl;

    //Boucle principale qui permet de répter le programme si l'utilisateur le veut
    while (repeat == 'O') {
    int nbr = 0;

        //Boucle de contrôle de la variable nbr en entrée. Elle doit être comprise entre [2-1000]
        do {
        cout << "veuillez entrer une valeur [2-1000] : " << endl;
        cin >> nbr;

    } while (nbr < 2 || nbr > 1000);
    cout << "Voici la liste des nombres premiers" << endl;

    int compteur = 0;

    //Boucle permettant de tester chaque nombres et de voir lesquelles sont premiers jusqu'à la limite imposée par l'utilisateur
    for (int a = 2; a <= nbr; ++a) {

    //Boucle permettant de déterminé si un nombre est entier en le divisant successivement par chaque nombres jusqu'à lui-même
    for (int b = 2 ; b <= a; ++b) {

        //Condition qui test si la division entière est possible. Si ce n'est pas le cas, la boucle s'exécute à nouveau
        if (a % b != 0 && b != a) { continue;}

        //Condition qui test si la division entière est possible. Si c'est le cas, la boucle s'arrête et le nombre n'est pas considéré comme premier
        else if (a % b == 0 && b!= a) { break;}

        //Dernière condition qui affiche le nombre si il est uniquement divisible par lui-même et 1
        else if (b == a) {
            cout << left << setw(8)<< a;
            ++compteur;

            //Condition permettant d'afficher les nombres entiers sou forme de 5 colonnes
            if (compteur == n_col) {cout << endl; compteur = 0;}
            break;}
    }
}
    cout << endl;

    //Boucle permettant de demander à l'utilisateur si il veut recommencer
    do {
        cout << "Voulez-vous recommencer ? [O/N] :" << endl;
        cin >> repeat;

    } while (repeat != 'O' and repeat != 'N');

        //permet de vider le buffer d'entrée
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
    cout << "Fin du programme" << endl;

}