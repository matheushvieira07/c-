#include <iostream>
using namespace std;

//Definição da função
int somar(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    int resultado = somar(x, y); // Chamada da  função
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}