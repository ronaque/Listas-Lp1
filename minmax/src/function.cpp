#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int, int> min_max(int V[], size_t n)
{
    // TODO: Adicione aqui sua solução.
    std::pair<int, int> valores;
    int tam = n;
    int menorValor = 100, indexMenorValor = -1;
    int maiorValor = 0, indexMaiorValor = -1;
    for (int i = 0; i < tam; i++)
    {
        if (menorValor > V[i])
        {
            menorValor = V[i];
            indexMenorValor = i;
        }
        if (maiorValor <= V[i])
        {
            maiorValor = V[i];
            indexMaiorValor = i;
        }
    }

    valores.first = indexMenorValor;
    valores.second = indexMaiorValor;
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return valores;
}
