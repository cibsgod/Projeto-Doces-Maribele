#include "Catalogo.h"

#include <iostream>

using namespace std;

void Catalogo::adicionarDoce(Doce doce) {

    doces.push_back(doce);

}

void Catalogo::mostrarCatalogo() {

    cout << "\n====================================\n";
    cout << "           MENU DE DOCES            \n";
    cout << "====================================\n";

    for (int i = 0; i < doces.size(); i++) {

        cout << i + 1 << ". "
             << doces[i].getNome()
             << " - R$ "
             << doces[i].getPreco()
             << "\n";
    }

    cout << "====================================\n";

}

Doce Catalogo::getDoce(int escolha) {

    return doces[escolha - 1];

}

int Catalogo::tamanho() {

    return doces.size();

}
