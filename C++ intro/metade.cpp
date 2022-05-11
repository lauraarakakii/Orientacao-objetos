/*
Leia um valor X. Coloque este valor na primeira posição de um vetor vet[100]. 
Em cada posição subsequente de vet (1 até 99), coloque a metade do valor armazenado na posição anterior. 
Imprima o vetor completo. 
*/


#include <iostream>
using namespace std;

int main(){

    double vet[100];

    cout << "Digite: " << endl;
    cin >> vet[0];

    cout << vet[0] << endl;

    for(int i=1; i<=99; i++){
        vet[i] = vet [i - 1]/2;
    }


    for(int y=0; y<100; y++){
        cout << "vet[" << y+1 << "] = "<< vet[y] << endl;
    }

    return 0;
}
