/************************************************************
* Auteur      : David PROSPERIN
 * École       : Ecole Centrale de Nantes
 * Cours       : SMP
 * Date        : 5 octobre 2025
 * Fichier     : suite_fibonacci.cpp
 *
 * Objectif :
 * On rappelle que la suite de Fibonacci est donnée par ses deux premiers termes u0 et u1 et la
 * récurrence u(n) = u(n−1) +u(n−2) pour n ≥2.
 * Écrire un programme qui calcule les 20 premiers termes de la suite de Fibonacci.
 *
 ************************************************************/

#include <array>
#include <iostream>

int main() {
 const int n = 20;
 std::array<int, n> suite_fibonacci = {1, 2};
 std::cout << suite_fibonacci[0] << std::endl << suite_fibonacci[1] << std::endl;

 for (int i = 2; i < n; i++) {
  suite_fibonacci[i] = suite_fibonacci[i - 1] + suite_fibonacci[i - 2];
  std::cout << suite_fibonacci[i] << std::endl;
 }
}