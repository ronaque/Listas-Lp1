#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal
{

    /*! 
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
    template <typename Itr, typename Compare>
    std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
    {

        int tam = last - first;
        int menorValor = 100, maiorValor = 0;
        Itr menor, maior;
        for (int i = 0; i < tam; i++)
        {
            if (menorValor > *first)
            {
                menorValor = *first;
                menor = first;
            }
            if (maiorValor <= *first)
            {
                maiorValor = *first;
                maior = first;
            }
        }

        return std::make_pair(menor, maior);
    }

}
#endif
