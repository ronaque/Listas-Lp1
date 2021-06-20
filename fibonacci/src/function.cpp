#include "function.h"

std::vector<unsigned int> fib_below_n(unsigned int n)
{
    // TODO: adicione o seu código aqui.
    std::vector<unsigned int> fibonacci;
    unsigned int primeiro = 1;
    unsigned int segundo = 1;
    unsigned int soma = 0;
    if (n > 1)
    {
        fibonacci.push_back(primeiro);
        fibonacci.push_back(segundo);
        while ((primeiro + segundo) < n)
        {
            soma = primeiro + segundo;
            fibonacci.push_back(soma);
            primeiro = segundo;
            segundo = soma;
        }
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return fibonacci;
}
