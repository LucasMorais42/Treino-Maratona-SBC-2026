/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
using namespace std;

int main()
{
    /*Criando um map (dicionário), na qual ao digitar a letra irá retornar o número (como string)
    a sintaxe é unordered_map <tipo_chave, tipo_dado> nome_mapa*/
    unordered_map <char, char> mapa =
    {
        {'A', '2'}, {'B', '2'}, {'C', '2'},
        {'D', '3'}, {'E', '3'}, {'F', '3'},
        {'G', '4'}, {'H', '4'}, {'I', '4'},
        {'J', '5'}, {'K', '5'}, {'L', '5'},
        {'M', '6'}, {'N', '6'}, {'O', '6'},
        {'P', '7'}, {'Q', '7'}, {'R', '7'}, {'S', '7'},
        {'T', '8'}, {'U', '8'}, {'V', '8'},
        {'W', '9'}, {'X', '9'}, {'Y', '9'}, {'Z', '9'}
    };
    
    int N;
    string palavra;
    string numero;
    cin >> N;
    
    for(int i=0; i<N; i++){
        numero = "";
        cin>> palavra;
        
        for(char letra:palavra){
            //transformando cada letra em maiúsculo (tem que usar include <cctype>)
            letra = toupper(letra);
            numero+=mapa[letra];
        }
        
        cout << numero << "\n";
    }
    
 

    return 0;
}