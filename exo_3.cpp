#include <iostream>
#include <cmath>
using namespace std;
/*Fonction permettant de reperer les nombres premiers inférieur ou egal à 1 */
int main(){
    int n = 11;
    bool a[n+1];
    a[0] =0;
    a[1] = 0;
    for(int i =2; i<= n; i++){
        
        if(((i%2)==0)&&(i != 2)){ //verifie si il est divisible par 2
            a[i] = 0;
        }else if(((i%3)==0)&&(i != 3)){ //verifie si il est divisible par 3
            a[i] = 0;
        }
        
        else{
            a[i] = 1;
        }
        
    }
    for(int y = 0; y <= n; y++){ // affiche le tableau des nombres parcourus
        cout << a[y] << endl;
    }
}