/************************************************************
 * Auteur      : David PROSPERIN
 * École       : Ecole Centrale de Nantes
 * Cours       : SMP
 * Date        : 2 octobre 2025
 * Fichier     : PGCD.cpp
 *
 * Objectif :
 * Écrire une fonction qui calcule le PGCD de deux nombres.
 *
 ************************************************************/

#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Calcule le Plus Grand Commun Diviseur (PGCD) de deux entiers.
 *
 * Cette fonction utilise l'algorithme d'Euclide pour déterminer le PGCD de deux
 * nombres entiers (positifs ou négatifs). Le résultat est toujours un entier positif.
 *
 * @param a Premier entier (peut être négatif).
 * @param b Deuxième entier (peut être négatif).
 * @return int Le PGCD de |a| et |b| (toujours positif).
 *         Retourne -1 si les deux entiers sont nuls (cas indéfini).
 *
 * @note Le PGCD(0, b) = |b|, et PGCD(a, 0) = |a|, sauf si a = b = 0.
 */
int PGCD(int a, int b)
{
    // Cas indéfini : PGCD(0, 0)
    if (a == 0 && b == 0)
    {
        std::cerr << "Erreur : le PGCD de 0 et 0 est indéfini." << std::endl;
        return -1;
    }

    a  = abs(a);
    b = abs(b);

    int reste = 0;

    while (b != 0)
    {
        reste = a % b;
        a = b;
        b = reste;
    }

    return a;
}

int main()
{

    int a = 78, b = 40;
    int valeur_pgcd = PGCD(a, b);

    cout << "a = " << a <<  " b = " << b << endl;
    cout << "PGCD = " << valeur_pgcd << endl;

    a = -78, b = 40;
    valeur_pgcd = PGCD(a, b);

    cout << "a = " << a <<  " b = " << b << endl;
    cout << "PGCD = " << valeur_pgcd << endl;
    
    return 0;
}

