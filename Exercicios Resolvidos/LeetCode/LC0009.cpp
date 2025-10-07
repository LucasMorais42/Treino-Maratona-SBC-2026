#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse

//fiz com o deepseek, tinha feito usando string mas deu erro e achei q tava na minha lógica, nn sabia q o leetcode fazia obrigatoriamente com objeto
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Casos especiais:
        // - Números negativos não são palíndromos
        // - Números terminados em 0 (exceto o próprio 0)
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        long long int reversed = 0;
        long long int original = x;

        // Inverte metade do número
        while(x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // Compara o original com a parte invertida
        return original == reversed;
    }
};

