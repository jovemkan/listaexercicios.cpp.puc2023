#include <iostream>
using namespace std;

int main() {
    float preco, valor_pago;
    int opcao;

    cout << "Digite o preço normal do produto: ";
    cin >> preco;

    cout << "Escolha a condição de pagamento: \n";
    cout << "1 - À vista, dinheiro ou cheque, 10% de desconto\n";
    cout << "2 - À vista, cartão de crédito, 5% de desconto\n";
    cout << "3 - Em 2 vezes, preço normal da etiqueta sem juros\n";
    cout << "4 - Em 3 vezes, preço normal da etiqueta + 10% de juros\n";
    cin >> opcao;

    switch (opcao) {
        case 1: 
            valor_pago = preco * 0.9;
            break;
        case 2: 
            valor_pago = preco * 0.95;
            break;
        case 3: 
            valor_pago = preco;
            cout << "O valor a ser pago em cada parcela é: " << preco / 2 << endl;
            break;
        case 4: 
            valor_pago = preco * 1.1;
            cout << "O valor a ser pago em cada parcela é: " << valor_pago / 3 << endl;
            break;
        default: 
            cout << "Opção inválida.\n";
            return 0;
    }

    cout << "O valor a ser pago é: " << valor_pago << endl;

    return 0;
}

