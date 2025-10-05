/************************************************************
 * Auteur      : David PROSPERIN
 * École       : Ecole Centrale de Nantes
 * Cours       : SMP
 * Date        : 5 octobre 2025
 * Fichier     : repertoire.cpp
 *
 * Objectif :
 * A partir d’une constante n définie en début de programme, écrire un programme pour appliquer le crible d’Erathostène sur les n premiers entiers. Pour rappel, l’algorithme consiste
 * à considérer un tableau d’entiers dans lequel on va marquer comme non-premier tous les
 * entiers divisibles par n’importe quel entier i ≤ sqrt(n).
 *
 ************************************************************/

#include <array>
#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    const int n = 70;
    int limite = ceil(sqrt(n));
    array<int, n> liste_premier{};
    bool est_premier = true;

    for (int a = 0; a < size(liste_premier); a++) {
        est_premier = true;
        for (int i = 2; i <=  limite && est_premier; i++) {
            if (a + 1 != i && (a + 1) % i == 0)
                est_premier = false;
        }
        // liste_premier[a] == a + 1 si premier 0 sinon
        if (est_premier) liste_premier[a] = a + 1;

        cout << liste_premier[a] << endl;
    }
    return 0;
}