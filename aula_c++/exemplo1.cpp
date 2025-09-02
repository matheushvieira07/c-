#include<iostream>
#include<string>
using namespace std;

int main(){
    int nota;

    cout << "Digite a nota do aluno (0 a 100): ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Conceito A" << endl;
    }

    else if (nota >= 75) {
        cout << "Conceito B" << endl;
    }
    else if (nota >= 60) {
        cout << "Conceito C" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }
    
    return 0;
}