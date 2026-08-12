#include "Doce.h"

Doce::Doce(string nome, double preco) {

    this->nome = nome;
    this->preco = preco;

}

string Doce::getNome() {

    return nome;

}

double Doce::getPreco() {

    return preco;

}
