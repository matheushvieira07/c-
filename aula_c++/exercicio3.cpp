#include<iostream>
#include<string>
using namespace std;

int main(){
    int nota1, nota2, nota3;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    int resultadosoma = nota1 + nota2 + nota3; 
    string resultado = (resultadosoma / 3 >= 7 ) ? "Aprovado" : "Reprovado";

    cout << "O aluno foi " << resultado << endl;

    return 0;
}