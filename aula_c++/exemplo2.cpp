#include<iostream>
using namespace std;

int main(){
    int dia;

    cout << "Digite um numero de 1 a 7: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terça-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-Feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "Sábado" << endl;
            break;
        default:
            cout << "Número inválido. Digite de 1 a 7" << endl;
    }
    return 0;
}