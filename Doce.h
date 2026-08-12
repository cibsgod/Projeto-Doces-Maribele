#ifndef DOCE_H
#define DOCE_H

#include <string>

using namespace std;

class Doce {

private:
    string nome;
    double preco;

public:
    Doce(string nome, double preco);

    string getNome();
    double getPreco();

};

#endif
