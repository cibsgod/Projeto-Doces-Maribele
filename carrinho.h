#ifndef CARRINHO_H
#define CARRINHO_H

#include <vector>
#include "Doce.h"

using namespace std;

class Carrinho {

private:
    vector<Doce> compras;

public:
    void adicionarDoce(Doce doce);

    double calcularTotal();

    void mostrarCarrinho();

};

#endif
