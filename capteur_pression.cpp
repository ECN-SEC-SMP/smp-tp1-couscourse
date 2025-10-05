/************************************************************
 * Auteur      : David PROSPERIN
 * École       : Ecole Centrale de Nantes
 * Cours       : SMP
 * Date        : 2 octobre 2025
 * Fichier     : capteur_pression.cpp
 *
 * Objectif :
 * On s’intéresse à un capteur de pression atmosphérique renvoyant une pression atmosphérique en millibars. Les données sont acquises dans une boucle via scanf() ou cin.
 * La liste des valeurs du capteur se termine par -1.
 * Écrire un programme qui calcule le minimum, le maximum et la pression moyenne de la
 * séquence de valeurs fournie au programme. Le programme ne doit pas stocker l’ensemble
 * des valeurs en mémoire.
 * Exemple de séquence de valeur : 1013,1022,1021,1019,990,1013,1015,1005,-1
 *
 * Remarques :
 * - La valeur -1 ne fait pas partie des valeurs prises en compte.
 * - Le programme suppose qu'au moins une valeur est saisie avant -1.
 *
 ************************************************************/

#include <iostream>
using namespace std;


// Initialisation des variables :
// - valeur_entree : valeur saisie par l'utilisateur
// - max : valeur maximale rencontrée
// - min : valeur minimale rencontrée
// - somme : somme de toutes les valeurs saisies (pour calculer la moyenne)
// - nb_entree : nombre de valeurs valides saisies
// - valeur : variable temporaire pour stocker la valeur courante (identique à valeur_entree ici)
int main()
{
    int valeur_entree = 0, max = 0, min = 0, somme = 0, nb_entree = 0, valeur = 0;

    // Boucle de saisie des valeurs jusqu'à ce que l'utilisateur entre -1
    while (valeur_entree != -1) {
        cin >> valeur_entree;

        if (valeur_entree != -1)
        {
            valeur = valeur_entree;
            nb_entree++;

            if (valeur > max)
            {
                max = valeur;
            }

            if (valeur < min)
            {
                min = valeur;
            }

            somme += valeur;
        }
    }

    if (nb_entree > 0)
    {
        cout << "Moyenne " << (float) somme / (float) nb_entree << endl;
        cout << "Min " << min << endl;
        cout << "Max " << max << endl;
    } else {
        cout << "Pas de valeur en entree." << endl;
    }
    return 0;
}