#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include "Doce.h"

using namespace std;

class Catalogo {

private:
    vector<Doce> doces;

public:
    void adicionarDoce(Doce doce);

    void mostrarCatalogo();

    Doce getDoce(int escolha);

    int tamanho();

};

#endif
