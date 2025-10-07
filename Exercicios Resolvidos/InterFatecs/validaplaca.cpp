#include <iostream>
#include <string>
#include <regex>
using namespace std;

/*regex é outro conceito importante para estudarmos, funciona em python também, mas basicamente:
regex nome_func(parametros...) -> define uma expressão regular, ou seja, o jeito que uma string deve
ser escrita

regex_match(palavra, regex_func) -> verifica se uma string está no padrão da regex_func

criando expressão regex:

^ e $ servem pra garantir que toda a string seja avaliada
[A-Z] significa que naquele local vai aceitar letras maiúsculas de A até Z 
[AP] -> significa que aceita somente A e P de digitos
{3} ou {n} -> diz quantas letras vão se adequar a condição anterior, ou seja, são 3 letras no padrão [A-Z]
{1,7} ou {m,n} -> significa que aceita de 1 até 7 digitos (ou de m até n digitos)
[0-9] mesma lógica, só que diz que aceita números de 0 a 9, quando não tem o {} é pq só será 1 digito

Exemplo do mercosul:

"^[A-Z]{3}[0-9][A-Z][0-9]{2}$"
Palavra que começa com 3 digitos de [A-Z], 1 digito de [0-9], 1 digito de [A-Z] e 2 digitos de [0-9]
AAA1B22


*/


string validarPlaca(const string &placa) {
    // Placa Mercosul: AAA9A99
    regex mercosul("^[A-Z]{3}[0-9][A-Z][0-9]{2}$");
    if (regex_match(placa, mercosul))
        return "Placa Mercosul";

    // Placa AAA-9999: AAA9999
    regex aaa_9999("^[A-Z]{3}[0-9]{4}$");
    if (regex_match(placa, aaa_9999))
        return "Placa AAA-9999";

    // Placa AA-9999: AA9999
    regex aa_9999("^[A-Z]{2}[0-9]{4}$");
    if (regex_match(placa, aa_9999))
        return "Placa AA-9999";

    // Placa numérica: 1 a 7 dígitos
    regex numerica("^[0-9]{1,7}$");
    if (regex_match(placa, numerica))
        return "Placa numerica";

    // Placa muito antiga: A ou P seguido de 1 a 5 dígitos
    regex muito_antiga("^[AP][0-9]{1,5}$");
    if (regex_match(placa, muito_antiga))
        return "Placa muito antiga";

    return "Placa invalida";
}

int main() {
    string placa;
    getline(cin, placa);
    cout << validarPlaca(placa) << endl;
    return 0;
}