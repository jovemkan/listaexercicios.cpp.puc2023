#include <iostream>
using namespace std;

const float SALARIO_MINIMO = 350.00;
const float VALOR_HORA_EXTRA = 10.00;

int main() {
    string nome;
    int horas_extras;
    float salario_hora_extra, salario_bruto, desconto_inss, desconto_ir, salario_liquido;

    cout << "Digite o nome do funcionário: ";
    getline(cin, nome);

    cout << "Digite a quantidade de horas-extras trabalhadas: ";
    cin >> horas_extras;

    salario_hora_extra = horas_extras * VALOR_HORA_EXTRA;
    salario_bruto = 3 * SALARIO_MINIMO + salario_hora_extra;
    desconto_inss = salario_bruto > 1500.00 ? salario_bruto * 0.12 : 0.00;
    desconto_ir = salario_bruto > 2000.00 ? salario_bruto * 0.20 : 0.00;
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;

    cout << "Funcionário: " << nome << endl;
    cout << "Salário Bruto: R$ " << salario_bruto << endl;
    cout << "Desconto INSS: R$ " << desconto_inss << endl;
    cout << "Desconto IR: R$ " << desconto_ir << endl;
    cout << "Salário Líquido: R$ " << salario_liquido << endl;

    return 0;
}

