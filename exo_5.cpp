#include <iostream>
#include <cmath>
using namespace std;


struct point{
        char nom;
        int x;
        int y;
    };

struct polygone{
    point A[];
};


int distance(int x1,int x2,int y1,int y2){
    int d;
    return  d = ((x1-x2)^2) + ((y1-y2)^2);
}

int main(){
    polygone Triangle;
    point O, P, Q;
    O.x = 0;
    O.y = 0;
    P.x = 4;
    P.y = 6;
    Q.x = 9;
    Q.y = 0;
    Triangle.A[0] = O;
    Triangle.A[1] = P;
    Triangle.A[2] = Q;
    // il reste la valeur absolue a faire 
    int cote1 = distance(O.x, P.x, O.y, P.y);
    int cote2 = distance(P.x, Q.x, P.y, Q.y);
    int cote3 = distance(Q.x, O.x, Q.y, O.y);
    int peri = cote1 + cote2 + cote3;
    cout <<cote1 << "+" << cote2 << "+"<< cote3 << "="<< peri << endl;
}