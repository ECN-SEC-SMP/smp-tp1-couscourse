#include <iostream>
using namespace std;
int main(){
    int u, v, w; //un-2 un-1 et un qui serviront dans la fonction 
    cout<< "Choisissez uo" << endl;// recupere u0
    cin >> u ;
    cout<< "Choisissez u1" << endl; // recupere u1
    cin >> v ;
    for(int i = 0; i < 19; i++){
        w = u + v; 
        u = v;
        v = w; 
        cout << "Voici le terme" << i <<":"<< w << endl;
    }
}