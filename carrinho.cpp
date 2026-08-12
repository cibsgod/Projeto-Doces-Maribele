#include "Carrinho.h"

#include <iostream>
#include <iomanip>

using namespace std;

void Carrinho::adicionarDoce(Doce doce) {

    compras.push_back(doce);

}

double Carrinho::calcularTotal() {

    double total = 0;

    for (int i = 0; i < compras.size(); i++) {

        total = total + compras[i].getPreco();

    }

    return total;

}

void Carrinho::mostrarCarrinho() {

    cout << "\n====================================\n";
    cout << "          RESUMO DA COMPRA          \n";
    cout << "====================================\n";

    if (compras.empty()) {

        cout << "Seu carrinho está vazio.\n";

        return;

    }

    for (int i = 0; i < compras.size(); i++) {

        cout << i + 1 << ". "
             << compras[i].getNome()
             << " - R$ "
             << fixed << setprecision(2)
             << compras[i].getPreco()
             << "\n";

    }

    cout << "------------------------------------\n";

    cout << "TOTAL: R$ "
         << fixed << setprecision(2)
         << calcularTotal()
         << "\n";

    cout << "====================================\n";

}
