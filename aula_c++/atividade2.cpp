#include <iostream>
using namespace std;

    int main() {
        int idade;
        cout << "Digite sua idade: ";
        cin >> idade;

        string resultado = (idade >= 18) ? "maior de idade" : "menor de idade";

        cout << "Voce e " << resultado << endl;
        
        return 0;
    }