/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. 
A seguir calcule e imprima a duração do jogo.Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
*/

#include <iostream>
using namespace std;

int main(){
    int hi, mi, hf, mf, calcMin, calcH;

    cout << "Digite: " << endl;
    cin >>  hi >> mi >> hf >> mf;

    calcMin = mf - mi;
    calcH = hf - hi;

    if (calcH == 0 && calcMin == 0){
        calcH = 24;
        calcMin = 0;
    }

    if (calcMin < 0){
        calcH = calcH - 1;
        calcMin = 60 + calcMin;
    }

    cout << "O JOGO DUROU " << calcH << " HORA(S) E " << calcMin << " MINUTO(S) " << endl;

    return 0;
}
