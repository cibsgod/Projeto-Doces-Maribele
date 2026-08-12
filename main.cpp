#include <iostream>

#include "Doce.h"
#include "Catalogo.h"
#include "Carrinho.h"

using namespace std;

int main() {

    Catalogo catalogo;
    Carrinho carrinho;

    catalogo.adicionarDoce(Doce("Palha Italiana", 8.00));
    catalogo.adicionarDoce(Doce("Brownie", 10.00));
    catalogo.adicionarDoce(Doce("Brigadeiro", 4.00));

    char continuar = 's';

    cout << "\n====================================\n";
    cout << "       BEM-VINDA AOS DOCES!        \n";
    cout << "====================================\n";

    cout << "Escolha um doce e adoce o seu dia!\n";

    while (continuar == 's' || continuar == 'S') {

        catalogo.mostrarCatalogo();

        int escolha;

        cout << "\nDigite o numero do doce: ";
        cin >> escolha;

        if (escolha >= 1 && escolha <= catalogo.tamanho()) {

            Doce doceEscolhido = catalogo.getDoce(escolha);

            cout << "\nÓtima escolha! "
                 << doceEscolhido.getNome()
                 << " é uma ótima opção!\n";

            cout << "Preço: R$ "
                 << doceEscolhido.getPreco()
                 << "\n";

            carrinho.adicionarDoce(doceEscolhido);

            cout << "\nDoce adicionado ao carrinho!\n";

        }

        else {

            cout << "\nOpção inválida! "
                 << "Escolha um número de 1 a "
                 << catalogo.tamanho()
                 << ".\n";

        }

        cout << "\nDeseja comprar mais algum doce? (s/n): ";
        cin >> continuar;

    }

    carrinho.mostrarCarrinho();

    cout << "\nObrigada pela compra! Volte sempre! <3\n";

    return 0;

}
