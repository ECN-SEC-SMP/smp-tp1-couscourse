/************************************************************
 * Auteur      : David PROSPERIN
 * École       : Ecole Centrale de Nantes
 * Cours       : SMP
 * Date        : 2 octobre 2025
 * Fichier     : repertoire.cpp
 *
 * Objectif :
 * Á partir de la structure de données définie ci-dessous définissant une entrée dans un répertoire, écrire un programme de gestion de répertoire. Celui-ci devra être capable de :
 * — Créer un répertoire vide
 * — afficher l’ensemble des entrées présentes dans le répertoire
 * — insérer une nouvelle entrée dans un répertoire
 * — rechercher une entrée (par exemple par nom) dans le répertoire et l’afficher
 *
 ************************************************************/

#include <iostream>
#include <vector>

using namespace std;

struct entree {
    string nom;
    string prenom;
    string telephone;
};

/**
 * @brief Affiche les informations d'une entrée.
 * 
 * Affiche le nom, le prénom et le numéro de téléphone de l'entrée passée en paramètre.
 * 
 * @param my_entree L'entrée à afficher.
 */
void afficher_entree(entree my_entree)
{
    cout << "============" << endl; 
    cout << "nom : " << my_entree.nom << endl;
    cout << "prenom : " << my_entree.prenom << endl;
    cout << "telephone : " << my_entree.telephone << endl;
    cout << "============" << endl; 
}

/**
 * @brief Crée un répertoire vide.
 * 
 * Initialise et retourne un vecteur d'entrées vide.
 * 
 * @return vector<entree> Un vecteur d'entrées vide.
 */
vector<entree> creer_repertoire()
{
    vector<entree> repertoire;
    return repertoire;
}

/**
 * @brief Affiche toutes les entrées d'un répertoire.
 * 
 * Parcourt le vecteur d'entrées et affiche chaque entrée.
 * 
 * @param repertoire Le vecteur d'entrées à afficher.
 */
void affiche_repertoire(vector<entree> repertoire)
{
    for (entree my_entree : repertoire)
    {
        afficher_entree(my_entree);
    }
}

/**
 * @brief Ajoute une entrée dans le répertoire.
 * 
 * Crée une nouvelle entrée avec les informations fournies et l'ajoute au répertoire.
 * 
 * @param nom Le nom de l'entrée.
 * @param prenom Le prénom de l'entrée.
 * @param telephone Le numéro de téléphone de l'entrée.
 * @param repertoire Référence au vecteur d'entrées dans lequel ajouter la nouvelle entrée.
 */
void ajout_entree(string nom, string prenom, string telephone, vector<entree> & repertoire)
{
    entree my_entree;

    my_entree.nom       = nom;
    my_entree.prenom    = prenom;
    my_entree.telephone = telephone;

    repertoire.push_back(my_entree);
}

/**
 * @brief Recherche une entrée dans le répertoire par nom.
 * 
 * Parcourt le répertoire pour trouver une entrée dont le nom correspond au nom donné.
 * Si une entrée est trouvée, copie ses données dans my_entree_trouvee.
 * 
 * @param nom Le nom à rechercher.
 * @param my_entree_trouvee Référence vers une entrée où stocker le résultat si trouvée.
 * @param repertoire Le vecteur d'entrées à rechercher.
 * @return int 1 si une entrée est trouvée, 0 sinon.
 */
int rechercher_entree_par_nom(string nom, entree & my_entree_trouvee, vector<entree> repertoire)
{
    for (entree my_entree : repertoire)
    {
        if (nom.compare(my_entree.nom) == 0)
        {
            my_entree_trouvee.nom = my_entree.nom;
            my_entree_trouvee.prenom = my_entree.prenom;
            my_entree_trouvee.telephone = my_entree.telephone;

            return 1;
        }
    }

    return 0;
}

int main()
{
    vector<entree> repertoire;
    entree entree_trouvee;

    ajout_entree("Prosperin", "David", "+331234567890", repertoire);
    ajout_entree("Prosperin", "Alexandre", "+331234567890", repertoire);
    ajout_entree("Dupont", "Vincent", "+331234567890", repertoire);
    ajout_entree("Prosperin", "Laurent", "+331234567890", repertoire);

    affiche_repertoire(repertoire);

    if (rechercher_entree_par_nom("Dupont", entree_trouvee, repertoire))
    {
        cout << "== Entree Dupont trouvee ==" << endl;

        afficher_entree(entree_trouvee);
    }

    return 0;
}

