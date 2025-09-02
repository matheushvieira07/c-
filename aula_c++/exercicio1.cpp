#include<iostream>
#include<string>
using namespace std;

void mensagem() { 
    cout << "Digite os horarios no formato 24h" << endl;
}

int main(){

    mensagem();

    int entrada, saida;

    cout << "Digite a hora que voce entrou no seu trabalho: ";
    cin >> entrada; 
    cout << "Digite a hora que voce saiu no seu trabalho: ";
    cin >> saida;

    int ht = saida - entrada;

    cout << "Total de horas trabalhadas foi de " << ht << " horas." << endl;
    

    return 0;

}

