#include<iostream>
using namespace std;

int main(){
    int estacao;

    cout << "Digite um numero de 1 a 4 para escolher uma estacao do ano: ";
    cin >> estacao;

    switch (estacao) {
        case 1:
            cout << "Verao" << endl;
            break;
        case 2:
            cout << "Outono" << endl;
            break;
        case 3:
            cout << "Primavera" << endl;
            break;
        case 4:
            cout << "Inverno" << endl;
            break;
        default:
            cout << "Numero invalido. Digite um numero de 1 a 4" << endl;
    }
    return 0;
}